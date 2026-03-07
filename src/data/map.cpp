#include "data/map.h"

// Define the platforms vector in one translation unit
// A set of platforms to make the level playable. Coordinates assume an 800x600 window.
std::vector<Platform> platforms = {
    // Ground
    Platform(sf::Vector2f(0.f, 550.f), sf::Vector2f(800.f, 50.f)),

    // Starting area / nearby platform
    Platform(sf::Vector2f(100.f, 450.f), sf::Vector2f(200.f, 25.f)),

    // A series of ascending floating platforms
    Platform(sf::Vector2f(350.f, 420.f), sf::Vector2f(120.f, 20.f)),
    Platform(sf::Vector2f(520.f, 360.f), sf::Vector2f(120.f, 20.f)),
    Platform(sf::Vector2f(240.f, 300.f), sf::Vector2f(100.f, 20.f)),
    Platform(sf::Vector2f(600.f, 260.f), sf::Vector2f(140.f, 20.f)),
};
