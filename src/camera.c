#include "camera.h"
#include <raylib.h>
#include <stdio.h>

void move_camera(Camera2D *camera, KeyboardKey dir)
{
  printf("Moving %d \r\n", dir);
  if (is_valid_movement(camera, dir))
  {
    switch (dir)
    {
      case KEY_LEFT:
        camera->target.x -= SPEED * GetFrameTime();
        break;
      case KEY_RIGHT:
        camera->target.x += SPEED * GetFrameTime();
        break;
      case KEY_UP:
        camera->target.y -= SPEED * GetFrameTime();
        break;
      case KEY_DOWN:
        camera->target.y += SPEED * GetFrameTime();
        break;

      default:
        break;
    }
  }
  printf("coordinates of camera: %f : %f \r\n", camera->target.x,
         camera->target.y);
}

bool is_valid_movement(Camera2D *camera, KeyboardKey dir)
{
  switch (dir)
  {
    case KEY_LEFT:
      if (camera->target.x - SPEED * GetFrameTime() < 0)
      {
        camera->target.x = 0;
        return false;
      }
      break;

    case KEY_RIGHT:
      if (camera->target.x + SPEED * GetFrameTime() > 4096)
      {
        camera->target.x = 4096;
        return false;
      }
      break;

    case KEY_UP:
      if (camera->target.y - SPEED * GetFrameTime() < 0)
      {
        camera->target.y = 0;
        return false;
      }
      break;

    case KEY_DOWN:
      if (camera->target.y + SPEED * GetFrameTime() > 4096)
      {
        camera->target.x = 4096;
        return false;
      }
      break;

    default:
      break;
  }
  return true;
}
