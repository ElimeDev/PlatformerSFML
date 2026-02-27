#pragma once

#include <string>
#include <SFML/Graphics.hpp>
#include "Internal/Player.h"
#include "Internal/Input.h"

class Game
{
public:
	Game(sf::Vector2f size, std::string title);
	~Game();
	void mainloop();

private:
	Player player;
	Input input;
	sf::RenderWindow window;
	sf::Clock deltaTimer;
};
