#include "cursor.h"
#include <raylib.h>

void update_cursor(bool is_hovering_interactive_element)
{
  if (is_hovering_interactive_element)
  {
    SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
  }
  else
  {
    SetMouseCursor(MOUSE_CURSOR_DEFAULT);
  }
}
