#pragma once

#include <string>
#include <SFML/Graphics.hpp>
#include "Internal/Player.h"
#include "Internal/Input.h"
#include "data/map.h"

class Game
{
public:
	Game(sf::Vector2f size, std::string title);
	~Game();
	void mainloop();

private:
	Player m_player;
	Input m_input;
	sf::RenderWindow m_window;
	sf::Clock m_clock;
};
