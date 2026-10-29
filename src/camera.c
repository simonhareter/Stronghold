#include "camera.h"
#include <raylib.h>
#include <raymath.h>
#include <stdio.h>

void move_camera(Camera2D *camera, KeyboardKey dir)
{
  float speed = CAMERA_SPEED * GetFrameTime();

  switch (dir)
  {
    case KEY_LEFT:
      camera->target.x -= speed;
      break;
    case KEY_RIGHT:
      camera->target.x += speed;
      break;
    case KEY_UP:
      camera->target.y -= speed;
      break;
    case KEY_DOWN:
      camera->target.y += speed;
      break;

    default:
      break;
  }

  printf("coordinates of camera: %f : %f \r\n", camera->target.x,
         camera->target.y);

  camera->target.x = Clamp(camera->target.x, 0.0f, 4096.0f);
  camera->target.y = Clamp(camera->target.y, 0.0f, 4096.0f);
}
