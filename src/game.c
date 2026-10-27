#include "game.h"
#include "assets.h"
#include "world.h"
#include <raylib.h>

void init_game(Game *game)
{
  world_init(&game->world);
  load_assets(&game->assets);
}
