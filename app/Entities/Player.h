//
// Created by kkeiper1103 on 3/23/22.
//

#ifndef RAYLIBBASEGAME_PLAYER_H
#define RAYLIBBASEGAME_PLAYER_H


#include "system/Entities/BaseEntity.h"

namespace App::Entities {

    class Player : public ::System::Entities::BaseEntity {
    private:
        int health = 100;

    public:
        Player();

        void update() override;
        void render() override;
    };

    typedef std::unique_ptr<Player> PlayerPtr;
}

#endif //RAYLIBBASEGAME_PLAYER_H
