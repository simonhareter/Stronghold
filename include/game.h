#ifndef GAME_H
#define GAME_H

#include "assets.h"
#include "world.h"
#include <raylib.h>

typedef struct
{
  World world;
  Assets assets;
  Camera2D camera;
} Game;

void init_game(Game *game);

#endif
