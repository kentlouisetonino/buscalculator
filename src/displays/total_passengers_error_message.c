#include "./ansi_color.h"
#include "./escape_sequence.h"
#include <stdio.h>

void total_passengers_error_message(void) {
  add_new_tab();
  printf("%sInvalid total passengers input.%s", RED, RESET);
}
