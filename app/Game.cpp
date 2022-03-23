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


    stateMachine.set(STATE_INTRO, std::make_unique<States::IntroState>());
    stateMachine.set(STATE_PLAYING, std::make_unique<States::PlayState>());
    stateMachine.change(STATE_INTRO);
}

Game::~Game() {

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
}

int Game::run() {
    RunStatus status = RunStatus::RUN_SUCCESS;

    try {
        while (!WindowShouldClose())    // Detect window close button or ESC key
        {
            // Update
            //----------------------------------------------------------------------------------
            // TODO: Update your variables here
            //----------------------------------------------------------------------------------
            stateMachine.update();


            // Draw
            //----------------------------------------------------------------------------------
            BeginDrawing();
            {
                stateMachine.render();
            }
            EndDrawing();
            //----------------------------------------------------------------------------------
        }
    }
    catch(const std::exception& e) {
        TraceLog(LOG_ERROR, e.what());
        status = RUN_FAILURE;
    }

    return status;
}
