#include "menu.h"
#include "config.h"
#include "cursor.h"
#include "game.h"
#include <raylib.h>
#include <raymath.h>

void init_menu(Game *game)
{
  float menu_width = 300.0f;
  float menu_height = 250.0f;

  float rec_width = menu_width;
  float rec_height = 50.0f;
  float rec_pos_x = SCREEN_WIDTH / 2.0f - rec_width / 2.0f;
  float rec_pos_y = SCREEN_HEIGHT / 2.0f - menu_height / 2.0f;

  float space_height = rec_height;

  game->menu.options[0] = (MenuOption){{rec_pos_x, rec_pos_y, rec_width, rec_height}, "Play"};
  game->menu.options[1] =
      (MenuOption){{rec_pos_x, rec_pos_y + rec_height + space_height, rec_width, rec_height}, "Settings"};
  game->menu.options[2] =
      (MenuOption){{rec_pos_x, rec_pos_y + rec_height * 2 + space_height * 2, rec_width, rec_height}, "Exit"};
  game->menu.option_count = 3;
}

bool is_mouse_over_button(Rectangle rec)
{
  Vector2 mouse_pos = {GetMouseX(), GetMouseY()};
  return CheckCollisionPointRec(mouse_pos, rec);
}

int which_button_pressed(Game *game)
{
  for (int i = 0; i < MENU_ITEM_COUNT; i++)
  {
    if (is_mouse_over_button(game->menu.options[i].rec) && IsMouseButtonReleased(MOUSE_LEFT_BUTTON))
    {
      return i;
    }
  }
  return -1;
}

bool update_menu_cursor(Game *game)
{
  for (int i = 0; i < MENU_ITEM_COUNT; i++)
  {
    if (is_mouse_over_button(game->menu.options[i].rec))
    {
      return true;
    }
  }
  return false;
}

void update_menu(Game *game)
{
  bool hovering_button = update_menu_cursor(game);
  update_cursor(hovering_button);

  switch (which_button_pressed(game))
  {
    case 0:
      game->state = GAME_STATE_PLAYING;
      break;
    case 1:
      game->state = GAME_STATE_SETTINGS;
      break;
    case 2:
      game->should_exit = true;
      break;
  }
}

void draw_menu(Game *game)
{
  Font font = GetFontDefault();
  float font_size = 30.;
  float spacing = font_size * 0.1f;
  float h_align = 0.5f, v_align = 0.5f;

  MenuOption *options = game->menu.options;
  int size = game->menu.option_count;

  for (int i = 0; i < size; i++)
  {
    Rectangle rec = options[i].rec;
    const char *text = options[i].text;

    DrawRectangleRec(rec, BLUE);

    Vector2 text_size = MeasureTextEx(font, text, (float)font_size, spacing);
    Vector2 text_pos = (Vector2){rec.x + Lerp(0.0f, rec.width - text_size.x, h_align),
                                 rec.y + Lerp(0.0f, rec.height - text_size.y, v_align)};

    DrawTextEx(font, text, text_pos, font_size, spacing, BLACK);
  }
}
