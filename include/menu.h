#ifndef MENU_H
#define MENU_H

#include <raylib.h>
#include <stdbool.h>

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

typedef enum
{
    MENU_ITEM_PLAY,
    MENU_ITEM_SETTINGS,
    MENU_ITEM_EXIT,
    MENU_ITEM_COUNT
} MenuItem;

void init_menu(Game *game);
void update_menu(Game *game);
bool is_play_button_pressed(Game *game);
void draw_menu(Game *game);
#endif
