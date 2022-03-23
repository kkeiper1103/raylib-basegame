//
// Created by kkeiper1103 on 3/23/22.
//

#include "PlayState.h"

using namespace App::States;

void PlayState::update() {
    for(auto& e: entities) e->update();
}

void PlayState::render() {
    ClearBackground(BLACK);

    for(auto& e: entities) e->render();
}

void PlayState::onEnter() {
}

void PlayState::onExit() {
}
