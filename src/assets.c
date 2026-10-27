#include "assets.h"
#include "world.h"
#include <raylib.h>

void load_assets(Assets *assets)
{
  load_tile_assets(&assets->tile_assets);
}

void load_tile_assets(TileAssets *tileAssets)
{
  tileAssets->terrain[TERRAIN_GRASS] = LoadTexture("../assets/tiles/grass.png");
  tileAssets->terrain[TERRAIN_WATER] = LoadTexture("../assets/tiles/water.png");
}
