//
// Created by kkeiper1103 on 3/23/22.
//

#include "IntroState.h"

using namespace App::States;

IntroState::IntroState() {
    auto player = std::make_unique<App::Entities::Player>();


    this->player = player.get();

    entities.push_back( std::move(player) );
}

void IntroState::update() {
    for(auto& e: entities) e->update();
}


void IntroState::render() {
    ClearBackground(RAYWHITE);

    for(auto& e: entities) e->render();
}

