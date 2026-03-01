#pragma once

#include <SFML/Graphics.hpp>

class Platform : public sf::Drawable, public sf::Transformable
{
public:
	Platform(sf::Vector2f position);
	~Platform();

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	sf::Sprite m_sprite;
};

