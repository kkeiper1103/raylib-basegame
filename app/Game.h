//
// Created by kkeiper1103 on 3/23/22.
//

#ifndef RAYLIBBASEGAME_GAME_H
#define RAYLIBBASEGAME_GAME_H

#include <string>
#include "raylib.h"

#include "States/IntroState.h"

namespace App {

    typedef enum RunStatus { RUN_SUCCESS = 0, RUN_FAILURE } RunStatus;
    typedef enum GameState { INTRO = 0, MENU, PLAYING, PAUSED, FINISHED } GameState;

    class Game {
    public:
        Game(int screenWidth, int screenHeight, const std::string& title, bool fullscreen = false);
        ~Game();

        int run();
    };
}

#endif //RAYLIBBASEGAME_GAME_H
