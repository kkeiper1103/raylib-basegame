//
// Created by kkeiper1103 on 3/23/22.
//

#ifndef RAYLIBBASEGAME_STATEMACHINE_H
#define RAYLIBBASEGAME_STATEMACHINE_H

#include <map>

#include "BaseState.h"

namespace System::States {
    class StateMachine {
    protected:
        std::map<GameState, BaseStatePtr> _states;
        GameState _current = STATE_INTRO;

    public:
        void set(GameState, BaseStatePtr state);
        void change(GameState state, bool reset = true);

        void update();
        void render();
    };
}



#endif //RAYLIBBASEGAME_STATEMACHINE_H
