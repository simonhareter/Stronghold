#include "world.h"

void world_init(World *world) {
  for (int i = 0; i < MAP_HEIGHT; i++) {
    for (int j = 0; j < MAP_WIDTH; j++) {
      world->tiles[i][j] = (Tile){
          .terrain = TERRAIN_GRASS, .object = OBJECT_NONE, .walkable = true};
    }
  }
}
