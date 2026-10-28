#include "game.h"
#include "assets.h"
#include "world.h"
#include <raylib.h>

void init_game(Game *game)
{
  game->camera = (Camera2D){
      .target = {0, 0}, .offset = {0, 0}, .rotation = 0.0f, .zoom = 1.0f};

  load_world(&game->world);
  load_assets(&game->assets);
}
