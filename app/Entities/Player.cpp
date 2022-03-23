//
// Created by kkeiper1103 on 3/23/22.
//

#include "Player.h"

App::Entities::Player::Player() {
    position.x = GetScreenWidth() / 2;
    position.y = GetScreenHeight() / 2;

    velocity = Vector3 {
            5, 5, 5
    };
}

void App::Entities::Player::update() {
    if( IsKeyDown(KEY_A) ) {
        direction.x = -1;
    }
    else if(IsKeyDown(KEY_D)) {
        direction.x = 1;
    }
    else {
        direction.x = 0;
    }

    if( IsKeyDown(KEY_W) ) {
        direction.y = -1;
    }
    else if(IsKeyDown(KEY_S)) {
        direction.y = 1;
    }
    else {
        direction.y = 0;
    }

    BaseEntity::update();
}

void App::Entities::Player::render() {
    static Color renderColor = GREEN;

    DrawRing(Vector2 {position.x, position.y}, 5.f, 10.f, 0, 360, 12, renderColor);


    DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
    DrawLineEx(Vector2 { 190, 225 }, Vector2{400, 225}, 5, DARKGRAY);
}
