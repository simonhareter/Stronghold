#ifndef WORLD_H
#define WORLD_H

#include "stdbool.h"

typedef enum
{
  TERRAIN_GRASS,
  TERRAIN_WATER,
  TERRAIN_STONE,
  TERRAIN_SAND,
  TERRAIN_ROAD,
  TERRAIN_COUNT
} TerrainType;

typedef enum
{
  OBJECT_NONE,
  OBJECT_TREE,
  OBJECT_STONE,
  OBJECT_IRON
} ObjectType;

typedef struct
{
  TerrainType terrain;
  ObjectType object;
  bool walkable;
} Tile;

#define WORLD_WIDTH 128
#define WORLD_HEIGHT 128
#define TILE_SIZE 32

typedef struct
{
  Tile tiles[WORLD_HEIGHT][WORLD_WIDTH];
} World;

void load_world(World *world);
#endif
