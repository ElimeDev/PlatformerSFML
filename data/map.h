#pragma once

#include <vector>
#include <SFML/Graphics.hpp>
#include "Internal/Platform.h"

// Declare the platforms vector here; define it in a single .cpp to avoid multiple-definition link errors
extern std::vector<Platform> platforms;
