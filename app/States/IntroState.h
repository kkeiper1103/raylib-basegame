//
// Created by kkeiper1103 on 3/23/22.
//

#ifndef RAYLIBBASEGAME_INTROSTATE_H
#define RAYLIBBASEGAME_INTROSTATE_H

#include <raylib.h>

#include "system/States/BaseState.h"
#include "app/Entities/Player.h"

namespace App::States {
    class IntroState : public ::System::States::BaseState {
    private:
        Entities::Player* player = nullptr;

    public:
        IntroState();

        void update() override;
        void render() override;
    };
}

#endif //RAYLIBBASEGAME_INTROSTATE_H
