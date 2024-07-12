#include "../displays/escape_sequence.h"
#include <stdio.h>

int total_passengers_input(void) {
  int total_passengers = 0;

  add_new_tab();
  printf("Enter the total number of passengers: ");
  scanf("%d", &total_passengers);

  return total_passengers;
}
