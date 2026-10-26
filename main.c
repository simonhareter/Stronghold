#include "game.h"
#include "raylib.h"
#include "renderer.h"

//------------------------------------------------------------------------------------
// Stronghold main entry point
//------------------------------------------------------------------------------------
int main(void) {
  const int screenWidth = 1920;
  const int screenHeight = 1080;

  InitWindow(screenWidth, screenHeight, "Stronghold");
  SetTargetFPS(60);

  init_game();
  Texture2D grass = LoadTexture("../assets/tiles/grass.png");

  while (!WindowShouldClose()) {
    // Update

    //----------------------------------------------------------------------------------

    // Draw

    //----------------------------------------------------------------------------------
    BeginDrawing();

    drawTile(&grass);

    EndDrawing();
    //----------------------------------------------------------------------------------
  }

  // De-Initialization

  CloseWindow(); // Close window and OpenGL context
  //--------------------------------------------------------------------------------------

  return 0;
}
