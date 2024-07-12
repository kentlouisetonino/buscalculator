#include "./ansi_color.h"
#include "./escape_sequence.h"
#include <stdio.h>

void total_last_trip_message(int total) {
  add_new_tab();
  printf("%sTotal last trip empty seats:%s %s%d%s", BLUE, RESET, GREEN, total,
         RESET);
}
