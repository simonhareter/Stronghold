#include "stdio.h"
#include "world.h"

void init_game() {
  World world;
  world_init(&world);
  printf("You called game innit lmfao.\n");
}
