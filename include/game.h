#ifndef GAME_H
#define GAME_H

#include "assets.h"
#include "world.h"
#include <raylib.h>

typedef enum
{
  GAME_STATE_MENU,
  GAME_STATE_PLAYING,
  GAME_STATE_SETTINGS
} GameState;

typedef struct
{
  GameState state;
  World world;
  Assets assets;
  Camera2D camera;
} Game;

void init_game(Game *game);
void update_game(Game *game);
void draw_current_state(Game *game);

#endif
