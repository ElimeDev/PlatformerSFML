#pragma once

#include <string>
#include <SFML/Graphics.hpp>
#include <fstream>
#include <sstream>
#include "Internal/Player.h"
#include "Internal/Input.h"
#include "Internal/TileMap.h"

const int WIN_WIDTH = 25 * 18; //25 tuiles de 32px
const int WIN_HEIGHT = 18 * 18; //18tuiles de 32px
const int SPRITE_SIZE = 18; //taille des sprites en pixel
const int COL_COUNT = 25; //Nombre de cases en largeur (col)
const int ROW_COUNT = 18; //Nombre de cases en hauteur (row)

class Game
{
public:
	Game(std::string title);
	~Game();
	void mainloop();

private:
	void loadMap();

	Player m_player;
	Input m_input;
	TileMap m_map;
	sf::RenderWindow m_window;
	sf::Clock m_clock;
	int m_collisionMap[COL_COUNT * ROW_COUNT]; //tableau des collisions de la map actuelle
};
