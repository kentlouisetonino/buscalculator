#include "./displays//app_description.h"
#include "./displays/clear_screen.h"
#include "./displays/escape_sequence.h"
#include "./displays/total_seats_error_message.h"
#include "./inputs/total_seats_input.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int total_seats = 0;
  int total_seats_error = 0;
  char garbage[100];

  while (1) {
    // Clean up the screen.
    clear_screen();
    add_new_line();
    add_new_line();

    // Display the app description.
    app_description();
    add_new_line();
    add_new_line();

    // If invalid total seats error.
    if (total_seats_error) {
      total_seats_error_message();
      add_new_line();
      add_new_line();
    }

    // Ask input for total bus seats.
    total_seats = total_seats_input();
    add_new_line();
    add_new_line();

    if (total_seats == 0) {
      total_seats = 0;
      total_seats_error = 1;
      fgets(garbage, 100, stdin);
      continue;
    } else {
      break;
    }
  }

  return 0;
}
