# Raylib Base Game

This repo is a Laravel-esque project structure for a game built with
[Raylib](https://www.raylib.com/).

```
|- app: your game files
    |- Entities: anything renderable & updatable
    |- States: Common gamestates, such as INTRO, LOADING, MENU, PLAYING

|- resources: base folder for storing game assets
    |- data: this is text based assets, like json, xml, etc
    |- gfx: graphics
    |- mfx: music effects
    
|- vendor: third party resources, like stb_image, raylib, assimp, nuklear gui, etc
```

## Installation

First, clone the repository into a new folder

`git clone https://github.com/kkeiper1103/raylib-basegame.git MyNewGameName`

Next, install the submodules so we can build targets

`git submodule update --init --recursive`

Finally, use cmake to build the 'raylib' target, then build the 'game' target.
