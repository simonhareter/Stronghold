#include "game.h"
#include "assets.h"
#include "world.h"
#include <raylib.h>

void init_game(Game *game)
{
  load_world(&game->world);
  load_assets(&game->assets);
}
