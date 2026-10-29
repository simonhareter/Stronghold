#include "renderer.h"
#include "assets.h"
#include "game.h"
#include "world.h"

void draw_game(Game *game)
{
  draw_world(&game->world, &game->assets.tile_assets);
}

void draw_world(const World *world, const TileAssets *tile_assets)
{
  for (int y = 0; y < WORLD_HEIGHT; y++)
  {
    for (int x = 0; x < WORLD_WIDTH; x++)
    {
      TerrainType terrain_type = world->tiles[y][x].terrain;
      Texture2D texture = tile_assets->terrain[terrain_type];

      draw_tile(texture, x, y);
    }
  }
}

void draw_tile(Texture2D texture, int x, int y)
{
  DrawTexture(texture, x * TILE_SIZE, y * TILE_SIZE, WHITE);
}
