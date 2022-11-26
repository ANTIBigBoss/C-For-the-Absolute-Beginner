// 2022-11-12

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  char answer;
  int menu;
  int x = 0;
  int *ptr;

  printf("Welcome to Mitch's Pointer machine! \nIf you would like to use the "
         "machine enter in 'y' for 'Yes' and 'n' for 'No': ");
  scanf("%c", &answer);

  while (answer == 'y') {
    printf("\nThe options for the Pointer Machine are as follows:\nEnter in "
           "'1' for Enter a New Integer Value\nEnter in '2' to Print the "
           "Pointer Address\nEnter in '3' to print the Integer Address\nEnter "
           "in '4' to print the Integer Value\nEnter in choice here: ");
    scanf("%d", &menu);

    switch (menu) {
    case 1:
      printf("\nPlease enter a new integer value here: ");
      scanf("%d", &x);
      printf("Your new integer value is: %d", x);
      break;

    case 2:
      printf("\nThe Integer Address is: %p", &ptr);
      break;

    case 3:
      ptr = &x;
      printf("\nThe Pointer Address is: %p", &x);
      break;

    case 4:
      printf("\nYour current integer value is: %d", x);
      break;
    }
    printf("\nDo you want to use the machine again? If so enter in 'y' to play "
           "again. \nIf not enter in 'n' to quit: ");
    scanf(" %c", &answer);
    while (answer == 'n') {

      printf("\nThank you for using the Pointer Machine have a great day!");
      return 0;
    }
  }
}