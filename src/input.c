#include "input.h"
#include "camera.h"
#include <raylib.h>

void handle_input(Camera2D *camera)
{
  int key = GetKeyPressed();
  switch (key)
  {
    case KEY_LEFT:
    case KEY_RIGHT:
    case KEY_UP:
    case KEY_DOWN:
      move_camera(camera, key);
      break;
  }
}
