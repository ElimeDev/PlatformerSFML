#include "Internal/Game.h"

using namespace sf;

Game::Game(sf::Vector2f size, std::string title)
{
	RenderWindow window(VideoMode(size.x, size.y), title);
}

Game::~Game()
{
}

void Game::mainloop()
{
}
