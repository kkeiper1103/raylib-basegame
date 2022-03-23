//
// Created by kkeiper1103 on 3/23/22.
//

#ifndef RAYLIBBASEGAME_BASEENTITY_H
#define RAYLIBBASEGAME_BASEENTITY_H

#include <memory>

#include <raylib.h>

namespace System::Entities {


    class BaseEntity {
    protected:
        Vector3 position {};
        Vector3 velocity {};
        Vector3 direction {};

    public:
        virtual void update();
        virtual void render();
    };

    typedef std::unique_ptr<BaseEntity> BaseEntityPtr;
}

#endif //RAYLIBBASEGAME_BASEENTITY_H
