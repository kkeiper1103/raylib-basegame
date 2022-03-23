//
// Created by kkeiper1103 on 3/23/22.
//

#include "BaseEntity.h"

using namespace System::Entities;

void BaseEntity::update() {
    position.x += velocity.x * direction.x;
    position.y += velocity.y * direction.y;
    position.z += velocity.z * direction.z;
}

void BaseEntity::render() {

}
