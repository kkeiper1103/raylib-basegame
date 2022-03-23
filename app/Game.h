//
// Created by kkeiper1103 on 3/23/22.
//

#ifndef RAYLIBBASEGAME_GAME_H
#define RAYLIBBASEGAME_GAME_H

#include <stdexcept>
#include <string>

#include "raylib.h"

#include "system/States/StateMachine.h"

#include "app/States/IntroState.h"
#include "app/States/PlayState.h"

namespace App {
    using namespace System::States;


    typedef enum RunStatus { RUN_SUCCESS = 0, RUN_FAILURE } RunStatus;

    class Game {
    protected:
        StateMachine stateMachine;

    public:
        Game(int screenWidth, int screenHeight, const std::string& title, bool fullscreen = false);
        ~Game();

        int run();
    };
}

#endif //RAYLIBBASEGAME_GAME_H
