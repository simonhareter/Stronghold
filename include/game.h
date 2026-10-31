#ifndef GAME_H
#define GAME_H

#include "assets.h"
#include "menu.h"
#include "world.h"
#include <raylib.h>
#include <stdbool.h>

typedef enum GameState
{
  GAME_STATE_MENU,
  GAME_STATE_PLAYING,
  GAME_STATE_SETTINGS
} GameState;

typedef struct Game
{
  Menu menu;
  GameState state;
  World world;
  Assets assets;
  Camera2D camera;
  bool should_exit;
} Game;

void init_game(Game *game);
void update_game(Game *game);
void draw_current_state(Game *game);

#endif
