#include <iostream>
#include <Internal/Player.h>

using namespace sf;

const float RADIUS = 10;
const float SPEED = 300;

Player::Player(Vector2f position) : m_sprite(RADIUS), m_position(position)
{
	m_sprite.setFillColor(Color::Red);
	m_sprite.setPosition(m_position.x - RADIUS / 2, m_position.y - RADIUS / 2);
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
	m_sprite.setPosition(m_position.x - RADIUS / 2, m_position.y - RADIUS / 2);
}

void Player::draw(RenderTarget& target, RenderStates states) const
{
	target.draw(m_sprite);
}
