#include "world.h"

void world_init(World *world)
{
  for (int i = 0; i < WORLD_HEIGHT; i++)
  {
    for (int j = 0; j < WORLD_WIDTH; j++)
    {
      world->tiles[i][j] = (Tile){
          .terrain = TERRAIN_WATER, .object = OBJECT_NONE, .walkable = true};
    }
  }
}
