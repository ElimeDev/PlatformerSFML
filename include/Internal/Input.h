#pragma once

#include <SFML/Graphics.hpp>

class Input
{
    struct Button { bool left, right, jump; };

public:
    // prototype du constructeur
    Input();
    //Proto Getbtn
    Button GetButton(void) const;
    //proto
    void InputHandler(sf::Event event, sf::RenderWindow& window);

private:
    Button button;

};
