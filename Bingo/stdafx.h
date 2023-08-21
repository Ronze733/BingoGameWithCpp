#pragma once

// #include <iostream>
#include <string>

#include "BingoBoard.h";
#include "Player.h";
#include "Game.h";

#ifdef _WIN32
    // Windows ÇÃ·§Æû
#define CLEAR_SCREEN "cls"
#elif defined(__unix__) || defined(__linux__) || defined(__APPLE__)
    // Unix ¶Ç´Â Linux ÇÃ·§Æû
#define CLEAR_SCREEN "clear"
#endif

using namespace std;