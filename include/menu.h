#ifndef MENU_H
#define MENU_H

#include <raylib.h>

typedef struct Game Game;

typedef struct
{
  Rectangle rec;
  const char *text;
} MenuOption;

typedef struct
{
  MenuOption options[3];
  int option_count;
} Menu;

void init_menu(Game *game);
void update_menu(Game *game);
void draw_menu(Game *game);
#endif
