#include "./displays//app_description.h"
#include "./displays/clear_screen.h"
#include <stdio.h>

int main(void) {
  // Clean up the screen.
  clear_screen();
  app_description();

  return 0;
}
