//
// Created by kkeiper1103 on 3/23/22.
//

#include "Game.h"

using namespace App;

Game::Game(int screenWidth, int screenHeight, const std::string &title, bool fullscreen) {
    // Initialization
    //--------------------------------------------------------------------------------------
    InitWindow(screenWidth, screenHeight, title.c_str());

    if(fullscreen)
        SetWindowState(FLAG_FULLSCREEN_MODE);


    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
}

Game::~Game() {

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
}

int Game::run() {
    States::IntroState introState;

    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        introState.update();


        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        {
            introState.render();
        }
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    return RUN_SUCCESS;
}
