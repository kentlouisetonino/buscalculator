#include "./ansi_color.h"
#include "./escape_sequence.h"
#include <stdio.h>

void app_description(void) {
  add_new_tab();
  printf("%s-----------------------------------------------%s", BLUE, RESET);
  add_new_line();
  add_new_line();
  add_new_tab();
  add_new_tab();
  add_new_tab();
  printf("%s BusCalculator%s", GREEN, RESET);
  add_new_line();
  add_new_tab();
  add_new_line();
  add_new_line();
  add_new_tab();
  printf(" Calculate the Bus last trip empty seats based");
  add_new_line();
  add_new_tab();
  printf(" on a total number of Bus seats and passenges.");
  add_new_line();
  add_new_line();
  add_new_tab();
  printf("%s-----------------------------------------------%s", BLUE, RESET);
}
