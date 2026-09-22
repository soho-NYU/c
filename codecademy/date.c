#include <stdio.h>

int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  // validate the various parts of the date input
  switch (year % 4) {
    case 0:
      // leap year so February can have 29 days
      break;
    default:
      // not a leap year so February can only have 28 days
  }

  // Print the month
  switch (month) {
    case 1:
      printf("January");
      break;
    case 2:
      printf("February");
      break;
    case 3:
      printf("March");
      break;
    case 4:
      printf("April");
      break;
    case 5:
      printf("May");
      break;
    case 6:
      printf("June");
      break;
    case 7:
      printf("July");
      break;
    case 8:
      printf("August");
      break;
    case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    case 12:
      printf("December");
      break;
    default:
    printf("that month does not exist, ya fuckin goof!! please enter a valid month!!!!!\n");
  }

  // Print the day
  printf(" ");
  printf("%d", day);


  // Print the suffix for a given day
  if (day == 11) {
      printf("th");
  } else if (day == 12) {
      printf("th");
  } else if (day == 13) {
      printf("th");
  } else if (day > 31) {
      printf("no month has more than 31 days, ya fuckin goof! please enter a valid day!!");
  } else {
      switch (day % 10) {
        case 1:
          printf("st");
          break;
        case 2:
          printf("nd");
          break;
        case 3:
          printf("rd");
          break;
        default:
          printf("th");
          break;
      }
  }

  printf(", ");

  // Print the year
  printf("%d", year);
  printf("\n");


  return 0;
}
