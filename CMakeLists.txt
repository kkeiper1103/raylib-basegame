cmake_minimum_required(VERSION 3.21)
project(RaylibBasegame)

set(EXECUTABLE game)

set(CMAKE_CXX_STANDARD 20)

# add raylib to the project
add_subdirectory(vendor/raylib)

#add nuklear to project
include_directories(vendor)


add_executable(${EXECUTABLE} main.cpp

        system/States/BaseState.cpp

        app/Game.cpp

        app/States/IntroState.cpp app/States/IntroState.h system/Entities/BaseEntity.cpp system/Entities/BaseEntity.h app/Entities/Player.cpp app/Entities/Player.h system/States/StateMachine.cpp system/States/StateMachine.h app/States/PlayState.cpp app/States/PlayState.h)

# add the game's source code (app folder like laravel) to the include path
target_include_directories(${EXECUTABLE} PRIVATE app)
target_include_directories(${EXECUTABLE} PRIVATE .)

# add raylib sources and library to target
target_include_directories(${EXECUTABLE} PRIVATE ${EXECUTABLE_OUTPUT_PATH}/vendor/raylib/raylib/include)
target_link_directories(${EXECUTABLE} PRIVATE ${EXECUTABLE_OUTPUT_PATH}/vendor/raylib/raylib)

# link to raylib
target_link_libraries(${EXECUTABLE} raylib)