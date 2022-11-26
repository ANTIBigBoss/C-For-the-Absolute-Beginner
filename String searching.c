// 2022-11-18

#include <stdio.h>
#include <string.h>

int main() {
  char answer;
  char *FamousSaying = "''A computer once beat me at chess, but it was no match for me at kick boxing!''";
  printf("\nWelcome to Mitch's String searcher!\n \nIf you would like to play "
         "enter in Y/y for 'Yes' and N/n for 'No': ");
  scanf("%c", &answer);

  while (answer == 'y') {
    char UserInput[50];
    printf("\nA famous saying will be entered in below and then you will be prompted to search for a string in it!\n");
    printf("\n%s\n\n", FamousSaying);
    printf("Please enter in a string to search for in the famous saying: ");
    scanf("%s", UserInput);
    printf("\nYou entered in: %s\n", UserInput);

    if (strstr(FamousSaying, UserInput) != NULL)
      printf("\nYour search result was found in famous saying\n");
    else
      printf("\nYour search result was not found in the famous saying\n");
    printf("\nWould you like to play again enter in Y/y for 'Yes' and N/n "
           "for 'No':");
    scanf(" %c", &answer);
    while (answer == 'n') {
      printf("\nThanks have a great day!");
      return 0;
    }
  }
}