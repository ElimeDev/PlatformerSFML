#include "Internal/Platform.h"

Platform::Platform(sf::Vector2f position)
{
}

Platform::~Platform()
{
}

void Platform::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_sprite);
}
