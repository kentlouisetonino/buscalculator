#include "./ansi_color.h"
#include "./escape_sequence.h"
#include <stdio.h>

void total_seats_error_message(void) {
  add_new_tab();
  printf("%sInvalid total seats input.%s", RED, RESET);
}
