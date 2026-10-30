#include "config.h"
#include "game.h"
#include <raylib.h>

//------------------------------------------------------------------------------------
// Stronghold main entry point
//------------------------------------------------------------------------------------
int main(void)
{

  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Stronghold");
  SetTargetFPS(60);

  Game game;
  init_game(&game);

  while (!WindowShouldClose())
  {
    update_game(&game);

    BeginDrawing();
    ClearBackground(BLACK);

    if (game.state == GAME_STATE_PLAYING)
    {
      BeginMode2D(game.camera);
      draw_current_state(&game);
      EndMode2D();
    }

    draw_current_state(&game);

    EndDrawing();
  }

  // unloadGame();
  CloseWindow(); // Close window and OpenGL context

  return 0;
}
