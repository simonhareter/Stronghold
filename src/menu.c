#include "menu.h"
#include "config.h"
#include "game.h"

void update_menu(Game *game)
{
  float rec_width = 300.0f;
  float rec_height = 150.0f;
  float rec_pos_x = SCREEN_WIDTH / 2.0f - rec_width / 2.0f;
  float rec_pos_y = SCREEN_HEIGHT / 3.0f - rec_height / 2.0f;
  MenuOption play = {{rec_pos_x, rec_pos_y, rec_width, rec_height}, "Play"};
  MenuOption settings = {{rec_pos_x, rec_pos_y + 150, rec_width, rec_height}, "Settings"};
  MenuOption exit = {{rec_pos_x, rec_pos_y + 150, rec_width, rec_height}, "Exit"};
}

void draw_menu(Game *game)
{
}
