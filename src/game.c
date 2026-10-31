#include "game.h"
#include "assets.h"
#include "config.h"
#include "input.h"
#include "menu.h"
#include "renderer.h"
#include "settings.h"
#include "world.h"
#include <raylib.h>

void init_game(Game *game)
{
  init_menu(game);
  game->should_exit = false;
  game->state = GAME_STATE_MENU;
  game->camera = (Camera2D){.target = {WORLD_WIDTH * TILE_SIZE / 2.0f, WORLD_HEIGHT * TILE_SIZE / 2.0f},
                            .offset = {SCREEN_WIDTH / 2.0f, SCREEN_HEIGHT / 2.0f},
                            .rotation = 0.0f,
                            .zoom = 1.0f};

  load_world(&game->world);
  load_assets(&game->assets);
}

void update_game(Game *game)
{
  switch (game->state)
  {
    case GAME_STATE_MENU:
      update_menu(game);
      break;

    case GAME_STATE_PLAYING:
      handle_input(&game->camera);
      break;

    case GAME_STATE_SETTINGS:
      update_settings(game);
      break;
  }
}

void draw_current_state(Game *game)
{
  switch (game->state)
  {
    case GAME_STATE_MENU:
      draw_menu(game);
      break;

    case GAME_STATE_PLAYING:
      BeginMode2D(game->camera);
      draw_game(game);
      EndMode3D();
      break;

    case GAME_STATE_SETTINGS:
      // draw_settings(game);
      break;
  }
}
