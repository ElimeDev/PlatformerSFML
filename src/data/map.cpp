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

    // Bonus section - alternative paths
    Platform(sf::Vector2f(180.f, 380.f), sf::Vector2f(90.f, 18.f)),
    Platform(sf::Vector2f(550.f, 300.f), sf::Vector2f(100.f, 20.f)),

    // Mid-level challenge boost
    Platform(sf::Vector2f(400.f, 160.f), sf::Vector2f(80.f, 18.f)),
    Platform(sf::Vector2f(150.f, 200.f), sf::Vector2f(90.f, 18.f)),

    // High section additions - spacing improvement
    Platform(sf::Vector2f(500.f, 50.f), sf::Vector2f(70.f, 16.f)),
    Platform(sf::Vector2f(150.f, -40.f), sf::Vector2f(100.f, 18.f)),

    // Very high section - better transitions
    Platform(sf::Vector2f(200.f, -80.f), sf::Vector2f(90.f, 18.f)),
    Platform(sf::Vector2f(650.f, -160.f), sf::Vector2f(100.f, 18.f)),
    Platform(sf::Vector2f(120.f, -320.f), sf::Vector2f(80.f, 16.f)),
    Platform(sf::Vector2f(500.f, -240.f), sf::Vector2f(100.f, 18.f)),

    // Ultra high section - extra support
    Platform(sf::Vector2f(350.f, -380.f), sf::Vector2f(70.f, 16.f)),
    Platform(sf::Vector2f(200.f, -460.f), sf::Vector2f(60.f, 15.f)),
    Platform(sf::Vector2f(500.f, -460.f), sf::Vector2f(60.f, 15.f)),
    Platform(sf::Vector2f(380.f, -540.f), sf::Vector2f(50.f, 14.f)),

    // Final push - final climax
    Platform(sf::Vector2f(280.f, -660.f), sf::Vector2f(55.f, 15.f)),
    Platform(sf::Vector2f(420.f, -660.f), sf::Vector2f(55.f, 15.f)),
    Platform(sf::Vector2f(320.f, -900.f), sf::Vector2f(45.f, 12.f)),

    // Extreme height section - left spiral
    Platform(sf::Vector2f(150.f, -1000.f), sf::Vector2f(80.f, 16.f)),
    Platform(sf::Vector2f(100.f, -1100.f), sf::Vector2f(70.f, 15.f)),
    Platform(sf::Vector2f(180.f, -1200.f), sf::Vector2f(75.f, 15.f)),
    Platform(sf::Vector2f(80.f, -1300.f), sf::Vector2f(65.f, 14.f)),

    // Extreme height section - center spiral
    Platform(sf::Vector2f(350.f, -1020.f), sf::Vector2f(60.f, 15.f)),
    Platform(sf::Vector2f(300.f, -1120.f), sf::Vector2f(55.f, 14.f)),
    Platform(sf::Vector2f(400.f, -1120.f), sf::Vector2f(55.f, 14.f)),
    Platform(sf::Vector2f(350.f, -1220.f), sf::Vector2f(50.f, 13.f)),
    Platform(sf::Vector2f(280.f, -1320.f), sf::Vector2f(50.f, 13.f)),
    Platform(sf::Vector2f(420.f, -1320.f), sf::Vector2f(50.f, 13.f)),

    // Extreme height section - right spiral
    Platform(sf::Vector2f(650.f, -1000.f), sf::Vector2f(80.f, 16.f)),
    Platform(sf::Vector2f(700.f, -1100.f), sf::Vector2f(70.f, 15.f)),
    Platform(sf::Vector2f(620.f, -1200.f), sf::Vector2f(75.f, 15.f)),
    Platform(sf::Vector2f(720.f, -1300.f), sf::Vector2f(65.f, 14.f)),

    // Sky-piercing section - ultra narrow platforms
    Platform(sf::Vector2f(350.f, -1420.f), sf::Vector2f(45.f, 12.f)),
    Platform(sf::Vector2f(200.f, -1540.f), sf::Vector2f(50.f, 13.f)),
    Platform(sf::Vector2f(500.f, -1540.f), sf::Vector2f(50.f, 13.f)),
    Platform(sf::Vector2f(350.f, -1660.f), sf::Vector2f(40.f, 11.f)),

    // Heavens gate - final extreme section
    Platform(sf::Vector2f(150.f, -1780.f), sf::Vector2f(60.f, 14.f)),
    Platform(sf::Vector2f(550.f, -1780.f), sf::Vector2f(60.f, 14.f)),
    Platform(sf::Vector2f(350.f, -1900.f), sf::Vector2f(35.f, 10.f)),
    Platform(sf::Vector2f(280.f, -2000.f), sf::Vector2f(40.f, 11.f)),
    Platform(sf::Vector2f(420.f, -2000.f), sf::Vector2f(40.f, 11.f)),
    Platform(sf::Vector2f(350.f, -2100.f), sf::Vector2f(30.f, 9.f)),

    // Cosmic ascent - left path
    Platform(sf::Vector2f(100.f, -2200.f), sf::Vector2f(65.f, 14.f)),
    Platform(sf::Vector2f(50.f, -2280.f), sf::Vector2f(60.f, 13.f)),
    Platform(sf::Vector2f(150.f, -2360.f), sf::Vector2f(60.f, 13.f)),
    Platform(sf::Vector2f(80.f, -2440.f), sf::Vector2f(55.f, 12.f)),
    Platform(sf::Vector2f(120.f, -2540.f), sf::Vector2f(55.f, 12.f)),

    // Cosmic ascent - center path
    Platform(sf::Vector2f(350.f, -2220.f), sf::Vector2f(60.f, 13.f)),
    Platform(sf::Vector2f(300.f, -2300.f), sf::Vector2f(55.f, 12.f)),
    Platform(sf::Vector2f(400.f, -2300.f), sf::Vector2f(55.f, 12.f)),
    Platform(sf::Vector2f(350.f, -2380.f), sf::Vector2f(55.f, 12.f)),
    Platform(sf::Vector2f(280.f, -2480.f), sf::Vector2f(50.f, 11.f)),
    Platform(sf::Vector2f(420.f, -2480.f), sf::Vector2f(50.f, 11.f)),
    Platform(sf::Vector2f(350.f, -2560.f), sf::Vector2f(50.f, 11.f)),

    // Cosmic ascent - right path
    Platform(sf::Vector2f(600.f, -2200.f), sf::Vector2f(65.f, 14.f)),
    Platform(sf::Vector2f(650.f, -2280.f), sf::Vector2f(60.f, 13.f)),
    Platform(sf::Vector2f(550.f, -2360.f), sf::Vector2f(60.f, 13.f)),
    Platform(sf::Vector2f(620.f, -2440.f), sf::Vector2f(55.f, 12.f)),
    Platform(sf::Vector2f(580.f, -2540.f), sf::Vector2f(55.f, 12.f)),

    // Void realm - micro platforms (avec meilleur espacement)
    Platform(sf::Vector2f(350.f, -2640.f), sf::Vector2f(45.f, 11.f)),
    Platform(sf::Vector2f(200.f, -2740.f), sf::Vector2f(50.f, 12.f)),
    Platform(sf::Vector2f(500.f, -2740.f), sf::Vector2f(50.f, 12.f)),
    Platform(sf::Vector2f(350.f, -2840.f), sf::Vector2f(45.f, 11.f)),
    Platform(sf::Vector2f(250.f, -2940.f), sf::Vector2f(45.f, 11.f)),
    Platform(sf::Vector2f(450.f, -2940.f), sf::Vector2f(45.f, 11.f)),
    Platform(sf::Vector2f(350.f, -3040.f), sf::Vector2f(40.f, 10.f)),

    // Infinity peak - the ultimate challenge
    Platform(sf::Vector2f(300.f, -3120.f), sf::Vector2f(40.f, 10.f)),
    Platform(sf::Vector2f(400.f, -3120.f), sf::Vector2f(40.f, 10.f)),
    Platform(sf::Vector2f(350.f, -3200.f), sf::Vector2f(35.f, 9.f)),
    Platform(sf::Vector2f(280.f, -3280.f), sf::Vector2f(35.f, 9.f)),
    Platform(sf::Vector2f(420.f, -3280.f), sf::Vector2f(35.f, 9.f)),
    Platform(sf::Vector2f(350.f, -3360.f), sf::Vector2f(30.f, 8.f)),

    // Transcendence zone - left path
    Platform(sf::Vector2f(100.f, -3460.f), sf::Vector2f(55.f, 12.f)),
    Platform(sf::Vector2f(50.f, -3560.f), sf::Vector2f(50.f, 11.f)),
    Platform(sf::Vector2f(150.f, -3660.f), sf::Vector2f(50.f, 11.f)),
    Platform(sf::Vector2f(80.f, -3760.f), sf::Vector2f(45.f, 10.f)),
    Platform(sf::Vector2f(120.f, -3880.f), sf::Vector2f(45.f, 10.f)),
    Platform(sf::Vector2f(60.f, -4000.f), sf::Vector2f(40.f, 9.f)),

    // Transcendence zone - center path
    Platform(sf::Vector2f(350.f, -3460.f), sf::Vector2f(50.f, 11.f)),
    Platform(sf::Vector2f(300.f, -3560.f), sf::Vector2f(48.f, 11.f)),
    Platform(sf::Vector2f(400.f, -3560.f), sf::Vector2f(48.f, 11.f)),
    Platform(sf::Vector2f(350.f, -3660.f), sf::Vector2f(45.f, 10.f)),
    Platform(sf::Vector2f(280.f, -3780.f), sf::Vector2f(45.f, 10.f)),
    Platform(sf::Vector2f(420.f, -3780.f), sf::Vector2f(45.f, 10.f)),
    Platform(sf::Vector2f(350.f, -3880.f), sf::Vector2f(40.f, 9.f)),
    Platform(sf::Vector2f(310.f, -4000.f), sf::Vector2f(40.f, 9.f)),
    Platform(sf::Vector2f(390.f, -4000.f), sf::Vector2f(40.f, 9.f)),

    // Transcendence zone - right path
    Platform(sf::Vector2f(600.f, -3460.f), sf::Vector2f(55.f, 12.f)),
    Platform(sf::Vector2f(650.f, -3560.f), sf::Vector2f(50.f, 11.f)),
    Platform(sf::Vector2f(550.f, -3660.f), sf::Vector2f(50.f, 11.f)),
    Platform(sf::Vector2f(620.f, -3760.f), sf::Vector2f(45.f, 10.f)),
    Platform(sf::Vector2f(580.f, -3880.f), sf::Vector2f(45.f, 10.f)),
    Platform(sf::Vector2f(640.f, -4000.f), sf::Vector2f(40.f, 9.f)),

    // Celestial realm - micro challenge
    Platform(sf::Vector2f(350.f, -4100.f), sf::Vector2f(35.f, 8.f)),
    Platform(sf::Vector2f(200.f, -4220.f), sf::Vector2f(40.f, 9.f)),
    Platform(sf::Vector2f(500.f, -4220.f), sf::Vector2f(40.f, 9.f)),
    Platform(sf::Vector2f(350.f, -4340.f), sf::Vector2f(35.f, 8.f)),
    Platform(sf::Vector2f(250.f, -4460.f), sf::Vector2f(35.f, 8.f)),
    Platform(sf::Vector2f(450.f, -4460.f), sf::Vector2f(35.f, 8.f)),
    Platform(sf::Vector2f(350.f, -4580.f), sf::Vector2f(30.f, 7.f)),

    // Eternal summit - ultimate extreme
    Platform(sf::Vector2f(300.f, -4680.f), sf::Vector2f(35.f, 8.f)),
    Platform(sf::Vector2f(400.f, -4680.f), sf::Vector2f(35.f, 8.f)),
    Platform(sf::Vector2f(350.f, -4800.f), sf::Vector2f(30.f, 7.f)),
    Platform(sf::Vector2f(280.f, -4920.f), sf::Vector2f(30.f, 7.f)),
    Platform(sf::Vector2f(420.f, -4920.f), sf::Vector2f(30.f, 7.f)),
    Platform(sf::Vector2f(350.f, -5000.f), sf::Vector2f(25.f, 6.f)),
};
