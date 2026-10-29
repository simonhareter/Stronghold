#include "game.h"
#include "assets.h"
#include "config.h"
#include "world.h"
#include <raylib.h>

void init_game(Game *game)
{
  game->camera =
      (Camera2D){.target = {WORLD_WIDTH * TILE_SIZE / 2.0f,
                            WORLD_HEIGHT * TILE_SIZE / 2.0f},
                 .offset = {SCREEN_WIDTH / 2.0f, SCREEN_HEIGHT / 2.0f},
                 .rotation = 0.0f,
                 .zoom = 1.0f};

  load_world(&game->world);
  load_assets(&game->assets);
}
