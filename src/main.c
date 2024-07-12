#include "./displays//app_description.h"
#include "./displays/clear_screen.h"
#include "./displays/escape_sequence.h"
#include "./displays/total_last_trip_message.h"
#include "./displays/total_passengers_error_message.h"
#include "./displays/total_seats_error_message.h"
#include "./inputs/total_passengers_input.h"
#include "./inputs/total_seats_input.h"
#include "./inputs/try_again_input.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int total_seats = 0;
  int total_seats_error = 0;
  int total_passengers = 0;
  int total_passengers_error = 0;
  int empty_seats = 0;
  char garbage_buffer[100];

  while (1) {
    // Clean up the screen.
    clear_screen();
    add_new_line();
    add_new_line();

    // Display the app description.
    app_description();
    add_new_line();
    add_new_line();

    // If invalid total seats input.
    if (total_seats_error) {
      total_seats_error_message();
      add_new_line();
      add_new_line();
    }

    // if invalid total passengers input.
    if (total_passengers_error) {
      total_passengers_error_message();
      add_new_line();
      add_new_line();
    }

    // Ask input for total bus seats.
    total_seats = total_seats_input();
    if (total_seats == 0) {
      total_seats = 0;
      total_seats_error = 1;
      total_passengers = 0;
      total_passengers_error = 0;
      fgets(garbage_buffer, 100, stdin);
      continue;
    }

    // Ask the input of total passengers.
    total_passengers = total_passengers_input();
    if (total_passengers == 0) {
      total_seats = 0;
      total_seats_error = 0;
      total_passengers = 0;
      total_passengers_error = 1;
      fgets(garbage_buffer, 100, stdin);
      continue;
    }

    if (total_passengers < total_seats) {
      empty_seats = total_seats - total_passengers;
      total_last_trip_message(empty_seats);
      add_new_line();
      add_new_line();
    } else {
      empty_seats = total_passengers % total_seats;

      if (empty_seats == 0) {
        total_last_trip_message(empty_seats);
        add_new_line();
        add_new_line();
      } else {
        empty_seats = total_seats - empty_seats;
        total_last_trip_message(empty_seats);
        add_new_line();
        add_new_line();
      }
    }

    if (try_again_input()) {
      total_seats = 0;
      total_seats_error = 0;
      total_passengers = 0;
      total_passengers_error = 0;
      empty_seats = 0;
      continue;
    }

    break;
  }

  add_new_line();
  add_new_line();
  return 0;
}
