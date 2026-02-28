#include <iostream>
#include <SFML/Graphics.hpp>
#include "Internal/Game.h"

int main()
{
	Game game("PlatformerSFML");
	game.mainloop();
	return 0;
}