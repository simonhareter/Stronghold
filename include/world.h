#ifndef WORLD_H
#define WORLD_H

#include "stdbool.h"

typedef enum {
  TERRAIN_GRASS,
  TERRAIN_WATER,
  TERRAIN_STONE,
  TERRAIN_SAND
} TerrainType;

typedef enum { OBJECT_NONE, OBJECT_TREE, OBJECT_STONE, OBJECT_IRON } ObjectType;

typedef struct {
  TerrainType terrain;
  ObjectType object;
  bool walkable;
} Tile;

#define MAP_WIDTH 128
#define MAP_HEIGHT 128

typedef struct {
  Tile tiles[MAP_HEIGHT][MAP_WIDTH];
} World;


void world_init(World *world);

#endif
