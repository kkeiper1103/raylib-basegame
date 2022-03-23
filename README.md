# Raylib Base Game

This repo is a Laravel-esque project structure for a game built with
[Raylib](https://www.raylib.com/).

```
|-app: your game files
    |- Entities: anything renderable & updatable
    |- States: Common gamestates, such as INTRO, LOADING, MENU, PLAYING

|-resources: base folder for storing game assets
    |- data: this is text based assets, like json, xml, etc
    |- gfx: graphics
    |- mfx: music effects
    
|-vendor: third party resources, like stb_image, raylib, assimp, nuklear gui, etc
```