//
// Created by kkeiper1103 on 3/23/22.
//

#ifndef RAYLIBBASEGAME_BASESTATE_H
#define RAYLIBBASEGAME_BASESTATE_H

// used for list of objects
#include <list>

#include "system/Entities/BaseEntity.h"

namespace System::States {

    class BaseState {
    protected:
        std::list<System::Entities::BaseEntityPtr> entities;

    public:
        virtual void update() = 0;
        virtual void render() = 0;

        virtual void onEnter() {}
        virtual void onExit() {}
    };
}

#endif //RAYLIBBASEGAME_BASESTATE_H
