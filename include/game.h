#ifndef GAME_H
#define GAME_H

#include "assets.h"
#include "world.h"

typedef struct
{
  World world;
  Assets assets;
} Game;

void init_game(Game *game);

#endif
