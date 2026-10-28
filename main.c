#include "game.h"
#include "input.h"
#include "raylib.h"
#include "renderer.h"

//------------------------------------------------------------------------------------
// Stronghold main entry point
//------------------------------------------------------------------------------------
int main(void)
{
  const int screenWidth = 1920;
  const int screenHeight = 1080;

  InitWindow(screenWidth, screenHeight, "Stronghold");
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
