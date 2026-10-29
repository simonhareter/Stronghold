#include "config.h"
#include "game.h"
#include "input.h"
#include "renderer.h"
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
    // Update
    handle_input(&game.camera);

    //----------------------------------------------------------------------------------

    // Draw
    BeginDrawing();
    ClearBackground(BLACK);

    BeginMode2D(game.camera);
    drawGame(&game);
    EndMode2D();

    EndDrawing();
    //----------------------------------------------------------------------------------
  }

  // De-Initialization
  // unloadGame();
  CloseWindow(); // Close window and OpenGL context
  //--------------------------------------------------------------------------------------

  return 0;
}
