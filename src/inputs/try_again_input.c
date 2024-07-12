#include "../displays/escape_sequence.h"
#include <stdio.h>

int try_again_input(void) {
  int try_again = 0;

  add_new_tab();
  printf("Try again (1-yes, 0-no)?: ");
  scanf("%d", &try_again);

  return try_again;
}
