#pragma once

#include <SFML/Graphics.hpp>
#include "Internal/Player.h"

class Platform : public sf::Drawable, public sf::Transformable
{
public:
	Platform(sf::Vector2f position, sf::Vector2f size);
	~Platform();
	sf::Vector2f handleCollision(Player& player);

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	sf::RectangleShape m_sprite;
};

