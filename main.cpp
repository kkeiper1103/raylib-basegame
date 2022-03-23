#include <iostream>

#include "Game.h"

int main(int argc, char* argv[]) {
    App::Game app(800, 450, "Raylib Base Game");

    return app.run();
}