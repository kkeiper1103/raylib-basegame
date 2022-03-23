//
// Created by kkeiper1103 on 3/23/22.
//

#include "Game.h"

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
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    return RUN_SUCCESS;
}
