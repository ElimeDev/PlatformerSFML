#pragma once

#include <SFML/Graphics.hpp>
#include "Internal/Input.h"

class Player : public sf::Drawable, public sf::Transformable
{
public:
	Player(sf::Vector2f position);
	~Player();
	void update(float delta, Input &input);

	sf::Vector2f getSize();
	sf::Vector2f getPosition();

	void setPosition(const sf::Vector2f &position);

	// gravity/physics
	void land();
	void leaveGround();

private:

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	sf::CircleShape m_sprite;
	sf::Vector2f m_position;
	sf::Vector2f m_size;
	sf::Vector2f m_velocity;
	bool m_onGround;
};

