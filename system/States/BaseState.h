//
// Created by kkeiper1103 on 3/23/22.
//

#ifndef RAYLIBBASEGAME_BASESTATE_H
#define RAYLIBBASEGAME_BASESTATE_H

// used for list of objects
#include <list>
#include <memory>

#include "system/Entities/BaseEntity.h"

namespace System::States {

    // list of available game states
    typedef enum GameState {
        STATE_INTRO = 0,
        STATE_MENU,
        STATE_PLAYING,
        STATE_PAUSED,
        STATE_FINISHED,
        STATE_GAMEOVER,
        STATE_LOADING
    } GameState;

    /**
     * Base class that all states descend from
     * use the unique_ptr below for automatic memory management
     *
     * If you need a direct pointer, I recommend creating a BaseStatePtr, then calling `.get()`
     *
     * ex: auto state = std::make_unique<BaseState>();
     *     this->pState = state.get();
     */
    class BaseState {
    protected:
        std::list<System::Entities::BaseEntityPtr> entities;

    public:
        virtual void update() = 0;
        virtual void render() = 0;

        virtual void onEnter() {}
        virtual void onExit() {}
    };

    typedef std::unique_ptr<BaseState> BaseStatePtr;
}

#endif //RAYLIBBASEGAME_BASESTATE_H
