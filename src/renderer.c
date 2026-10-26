#include "renderer.h"
#include "world.h"

void drawTile(Texture2D *texture) {
  for (int y = 0; y < WORLD_HEIGHT; y++) {
    for (int x = 0; x < WORLD_WIDTH; x++) {
      DrawTexture(*texture, x * TILE_SIZE, y * TILE_SIZE, WHITE);
    }
  }
}
