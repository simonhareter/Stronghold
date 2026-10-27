#ifndef RENDERER_H
#define RENDERER_H

#include "assets.h"
#include "game.h"
#include "world.h"
#include <raylib.h>

void drawGame(Game *game);
void drawWorld(const World *world, const TileAssets *tile_assets);
void drawTile(Texture2D texture, int x, int y);

#endif
