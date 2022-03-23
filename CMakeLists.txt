cmake_minimum_required(VERSION 3.21)
project(RaylibBasegame)

set(EXECUTABLE game)

set(CMAKE_CXX_STANDARD 20)

# add raylib to the project
add_subdirectory(vendor/raylib)


add_executable(${EXECUTABLE} main.cpp app/Game.cpp)

# add the game's source code (app folder like laravel) to the include path
target_include_directories(${EXECUTABLE} PRIVATE app)

# add raylib sources and library to target
target_include_directories(${EXECUTABLE} PRIVATE ${EXECUTABLE_OUTPUT_PATH}/vendor/raylib/raylib/include)
target_link_directories(${EXECUTABLE} PRIVATE ${EXECUTABLE_OUTPUT_PATH}/vendor/raylib/raylib)

# link to raylib
target_link_libraries(${EXECUTABLE} raylib)