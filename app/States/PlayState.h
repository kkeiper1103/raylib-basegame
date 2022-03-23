//
// Created by kkeiper1103 on 3/23/22.
//

#ifndef RAYLIBBASEGAME_PLAYSTATE_H
#define RAYLIBBASEGAME_PLAYSTATE_H

#include <raylib.h>

#include "system/States/BaseState.h"
#include "app/Entities/Player.h"

using namespace System::States;

namespace App::States {
    class PlayState : public BaseState {
    private:

    public:
        void update() override;
        void render() override;

        void onEnter() override;
        void onExit() override;
    };
}

#endif //RAYLIBBASEGAME_PLAYSTATE_H
