#include <iostream>
#include <Internal/Player.h>

using namespace sf;

const float RADIUS = 10;
const float SPEED = 300;
const float GRAVITY = 1500.f; // pixels per second^2
const float JUMP_SPEED = 600.f; // initial jump velocity

Player::Player(Vector2f position) : m_sprite(RADIUS), m_position(position), m_velocity(0.f, 0.f), m_onGround(false)
{
	m_sprite.setFillColor(Color::Red);
	// set sprite so that m_position represents the center of the player
	m_sprite.setOrigin(RADIUS, RADIUS);
	m_sprite.setPosition(m_position);

	// logical size (width, height) used for collision (diameter)
	m_size = Vector2f(RADIUS * 2.f, RADIUS * 2.f);
}

Player::~Player()
{
}

void Player::update(float delta, Input& input)
{
    if (input.GetButton().right)
	{
		m_position.x += SPEED * delta;
	}
	if (input.GetButton().left)
	{
		m_position.x -= SPEED * delta;
	}

    // Jump
    if (input.GetButton().jump && m_onGround)
    {
        m_velocity.y = -JUMP_SPEED;
        m_onGround = false;
    }

    // Apply gravity
    m_velocity.y += GRAVITY * delta;

    // Integrate vertical velocity
    m_position.y += m_velocity.y * delta;

    m_sprite.setPosition(m_position);
}

sf::Vector2f Player::getSize()
{
	return m_size;
}

sf::Vector2f Player::getPosition()
{
    // return top-left position for compatibility with platform collision handling
    return Vector2f(m_position.x - RADIUS, m_position.y - RADIUS);
}

void Player::setPosition(const sf::Vector2f &position)
{
    // position is expected to be top-left; convert to center
    m_position = Vector2f(position.x + RADIUS, position.y + RADIUS);
    // update sprite position to match center
    m_sprite.setPosition(m_position);
}

void Player::land()
{
    m_velocity.y = 0.f;
    m_onGround = true;
}

void Player::leaveGround()
{
    m_onGround = false;
}

void Player::draw(RenderTarget& target, RenderStates states) const
{
	target.draw(m_sprite);
}
