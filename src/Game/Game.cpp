#include "Internal/Game.h"

using namespace sf;

Game::Game(Vector2f size, std::string title)
    : m_player(sf::Vector2f(size.x/2, size.y/2)),
      m_window(VideoMode(size.x, size.y), title)
{
    
}

Game::~Game()
{
}

void Game::mainloop()
{
    while (m_window.isOpen())
    {
        Event event;
        while (m_window.pollEvent(event))
        {
            m_input.InputHandler(event, m_window);
        }

        float deltaTime = m_clock.restart().asSeconds();

		m_player.update(deltaTime, m_input);

		// handle collisions after movement
		handleCollision();

        m_window.clear(Color::Black);

        //Draw here
        // Draw platforms from the global map
        for (auto& p : platforms)
        {
            m_window.draw(p);
        }

        // Draw player
        m_window.draw(m_player);

        m_window.display();
    }
}

void Game::handleCollision()
{
    for (auto& p : platforms)
    {
        auto oldPos = m_player.getPosition();
        auto newPos = p.handleCollision(oldPos, m_player.getSize());
        if (newPos != oldPos)
        {
            m_player.setPosition(newPos);
            m_player.land();
        }
	}
}
