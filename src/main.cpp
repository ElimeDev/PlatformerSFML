#include <iostream>
#include <SFML/Graphics.hpp>
#include "Internal/Game.h"

int main()
{
	Game game(sf::Vector2f(500, 500), "PlatformerSFML");
	game.mainloop();
	return 0;
}