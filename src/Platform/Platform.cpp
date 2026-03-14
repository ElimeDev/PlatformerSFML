#include "Internal/Platform.h"

Platform::Platform(sf::Vector2f position, sf::Vector2f size)
{
	m_sprite.setSize(size);
	m_sprite.setPosition(position);
	m_sprite.setFillColor(sf::Color::Green); // Set a default color for the platform
	m_sprite.setOrigin(0.f, 0.f);
	m_sprite.setOutlineThickness(1.0f);
	m_sprite.setOutlineColor(sf::Color::Black); // Optional: add an outline for visibility
}

Platform::~Platform()
{
}

sf::Vector2f Platform::handleCollision(Player& player)
{
	sf::Vector2f playerPosition = player.getPosition();
	sf::Vector2f playerSize = player.getSize();

	sf::FloatRect platformBounds = m_sprite.getGlobalBounds();
	sf::FloatRect playerBounds = player.getBounds();
	if (platformBounds.intersects(playerBounds))
	{
		// Check if player is coming from below (player bottom is below platform bottom)
		float playerBottom = playerPosition.y + playerSize.y;
		float platformBottom = platformBounds.top + platformBounds.height;

		if (playerBottom > platformBottom)
		{
			// Player is coming from below, push down to prevent penetration
			player.leaveGround();
			return sf::Vector2f(playerPosition.x, platformBounds.top + platformBounds.height);
		}

		// Collision from above: move the player up to the top of the platform
		player.land();
		return sf::Vector2f(playerPosition.x, platformBounds.top - playerSize.y);
	}
	return playerPosition; // No collision, return original position
}

void Platform::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_sprite);
}
