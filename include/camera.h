#ifndef CAMERA_H
#define CAMERA_H

#include "input.h"
#include <raylib.h>

#define SPEED 300.0f

bool is_valid_movement(Camera2D *camera, KeyboardKey dir);
void move_camera(Camera2D *camera, KeyboardKey dir);

#endif
