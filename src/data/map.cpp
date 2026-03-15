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

    // Right side ascending path
    Platform(sf::Vector2f(680.f, 380.f), sf::Vector2f(100.f, 20.f)),
    Platform(sf::Vector2f(650.f, 320.f), sf::Vector2f(110.f, 20.f)),
    Platform(sf::Vector2f(680.f, 250.f), sf::Vector2f(100.f, 20.f)),

    // Left side mid-section platforms
    Platform(sf::Vector2f(50.f, 380.f), sf::Vector2f(130.f, 20.f)),
    Platform(sf::Vector2f(80.f, 280.f), sf::Vector2f(120.f, 20.f)),

    // Central challenging section
    Platform(sf::Vector2f(400.f, 240.f), sf::Vector2f(90.f, 18.f)),
    Platform(sf::Vector2f(320.f, 180.f), sf::Vector2f(100.f, 20.f)),
    Platform(sf::Vector2f(480.f, 180.f), sf::Vector2f(100.f, 20.f)),

    // Top section - difficult jumps
    Platform(sf::Vector2f(200.f, 120.f), sf::Vector2f(110.f, 18.f)),
    Platform(sf::Vector2f(550.f, 130.f), sf::Vector2f(110.f, 18.f)),
    Platform(sf::Vector2f(375.f, 70.f), sf::Vector2f(50.f, 15.f)),

    // Very high section - left path
    Platform(sf::Vector2f(100.f, 0.f), sf::Vector2f(130.f, 20.f)),
    Platform(sf::Vector2f(50.f, -80.f), sf::Vector2f(120.f, 20.f)),
    Platform(sf::Vector2f(150.f, -160.f), sf::Vector2f(100.f, 18.f)),
    Platform(sf::Vector2f(80.f, -240.f), sf::Vector2f(110.f, 20.f)),

    // Very high section - center path
    Platform(sf::Vector2f(350.f, -20.f), sf::Vector2f(120.f, 20.f)),
    Platform(sf::Vector2f(300.f, -100.f), sf::Vector2f(100.f, 18.f)),
    Platform(sf::Vector2f(420.f, -100.f), sf::Vector2f(100.f, 18.f)),
    Platform(sf::Vector2f(350.f, -180.f), sf::Vector2f(120.f, 20.f)),
    Platform(sf::Vector2f(300.f, -260.f), sf::Vector2f(100.f, 18.f)),

    // Very high section - right path
    Platform(sf::Vector2f(650.f, -40.f), sf::Vector2f(130.f, 20.f)),
    Platform(sf::Vector2f(700.f, -120.f), sf::Vector2f(110.f, 20.f)),
    Platform(sf::Vector2f(600.f, -200.f), sf::Vector2f(120.f, 18.f)),
    Platform(sf::Vector2f(700.f, -280.f), sf::Vector2f(100.f, 20.f)),

    // Ultra high section - narrowing challenge
    Platform(sf::Vector2f(350.f, -340.f), sf::Vector2f(100.f, 18.f)),
    Platform(sf::Vector2f(250.f, -420.f), sf::Vector2f(80.f, 16.f)),
    Platform(sf::Vector2f(450.f, -420.f), sf::Vector2f(80.f, 16.f)),
    Platform(sf::Vector2f(350.f, -500.f), sf::Vector2f(60.f, 15.f)),
    Platform(sf::Vector2f(300.f, -580.f), sf::Vector2f(70.f, 15.f)),
    Platform(sf::Vector2f(420.f, -580.f), sf::Vector2f(70.f, 15.f)),

    // Final peak section - extreme difficulty
    Platform(sf::Vector2f(350.f, -660.f), sf::Vector2f(50.f, 14.f)),
    Platform(sf::Vector2f(250.f, -740.f), sf::Vector2f(60.f, 15.f)),
    Platform(sf::Vector2f(450.f, -740.f), sf::Vector2f(60.f, 15.f)),
    Platform(sf::Vector2f(350.f, -820.f), sf::Vector2f(40.f, 12.f)),
};
