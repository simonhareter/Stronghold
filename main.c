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

  while (!WindowShouldClose() && !game.should_exit)
  {
    update_game(&game);

    BeginDrawing();

    ClearBackground(BLACK);
    draw_current_state(&game);

    EndDrawing();
  }

  // unloadGame();
  CloseWindow(); // Close window and OpenGL context

  return 0;
}
