#include "world.h"
#include <stdio.h>

void load_world(World *world)
{
  FILE *fptr;

  fptr = fopen("../assets/maps/map_1_river_valley.txt", "r");

  if (fptr == NULL)
  {
    perror("Failed to open map");
    return;
  }

  char row[WORLD_WIDTH + 3];

  int y = 0;
  while (y < WORLD_HEIGHT && fgets(row, sizeof(row), fptr))
  {
    for (int x = 0; x < WORLD_WIDTH; x++)
    {
      char c = row[x];

      if (c < '0' || c >= '0' + TERRAIN_COUNT)
      {
        fprintf(stderr, "Invalid terrain at (%d, %d)\n", x, y);
        fclose(fptr);
        return;
      }

      TerrainType terrain = (TerrainType)(c - '0');

      world->tiles[y][x] =
          (Tile){.terrain = terrain, .object = OBJECT_NONE, .walkable = true};
    }

    y++;
  }

  fclose(fptr);

  if (y != WORLD_HEIGHT)
  {
    fprintf(stderr, "Map has %d rows; expected %d\n", y, WORLD_HEIGHT);
  }
}
