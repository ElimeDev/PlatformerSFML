#pragma once

#include <SFML/Graphics.hpp>

class Platform : public sf::Drawable, public sf::Transformable
{
public:
	Platform(sf::Vector2f position, sf::Vector2f size);
	~Platform();
	sf::Vector2f handleCollision(const sf::Vector2f& playerPosition, const sf::Vector2f& playerSize);

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	sf::RectangleShape m_sprite;
};

