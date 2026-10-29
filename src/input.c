#include "input.h"
#include "camera.h"
#include <raylib.h>

void handle_input(Camera2D *camera)
{
  if (IsKeyDown(KEY_RIGHT))
  {
    move_camera(camera, KEY_RIGHT);
  }

  if (IsKeyDown(KEY_LEFT))
  {
    move_camera(camera, KEY_LEFT);
  }

  if (IsKeyDown(KEY_UP))
  {
    move_camera(camera, KEY_UP);
  }

  if (IsKeyDown(KEY_DOWN))
  {
    move_camera(camera, KEY_DOWN);
  }
}
