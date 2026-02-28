#pragma once

#include <SFML/Graphics.hpp>
#include "Internal/Input.h"

class Player : public sf::Sprite
{
public:
	Player(sf::Vector2f position, int tileSize);
	~Player();
	void update(float delta, Input &input, int collision[]);

private:
	
};

