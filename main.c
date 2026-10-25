#include "raylib.h"

//------------------------------------------------------------------------------------
// Stronghold main entry point
//------------------------------------------------------------------------------------
int main(void) {
  const int screenWidth = 1920;
  const int screenHeight = 1080;

  InitWindow(screenWidth, screenHeight, "Stronghold");

  SetTargetFPS(60);

  while (!WindowShouldClose()) // Detect window close button or ESC key
  {
    // Update

    //----------------------------------------------------------------------------------

    // Draw

    //----------------------------------------------------------------------------------
    BeginDrawing();

    ClearBackground(BLACK);

    DrawText("Congrats! You created your first window!", 190, 200, 20,
             LIGHTGRAY);

    EndDrawing();
    //----------------------------------------------------------------------------------
  }

  // De-Initialization
  CloseWindow(); // Close window and OpenGL context
  //--------------------------------------------------------------------------------------

  return 0;
}
