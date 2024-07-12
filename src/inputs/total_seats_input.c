#include "../displays/escape_sequence.h"
#include <stdio.h>

int total_seats_input(void) {
  int total_seats = 0;

  add_new_tab();
  printf("Enter the total number of bus seats: ");
  scanf("%d", &total_seats);

  return total_seats;
}
