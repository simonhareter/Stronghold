#ifndef MENU_H
#define MENU_H

#include "game.h"
#include <raylib.h>

typedef struct
{
  Rectangle rec;
  const char *text;
} MenuOption;

void update_menu(Game *game);
void draw_menu(Game *game);
#endif
