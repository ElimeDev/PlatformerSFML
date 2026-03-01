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

        m_window.clear(Color::Black);

        //Draw here
        m_window.draw(m_player);

        m_window.display();
    }
}