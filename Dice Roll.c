//Dice Roll 
//10 03 2022

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int main() 
{
  int input;
  srand(time(NULL));
  int dice1;
  int dice2;
  int diceSum;
  printf ("\n\nGo DICE ROLL!!\n\n");
  srand(time(NULL));
  dice1 = (rand()%8) +1;
  printf ("The first dice is %d\n", dice1);
  dice2 = (rand()%8) +1;
  printf ("\nThe second dice is %d", dice2);
  diceSum = dice1+dice2;
  printf ("\n\nThe total of the dice is %d", diceSum);
  if (diceSum == 9 || diceSum ==15)
    printf ("\n\nThe player wins!!!!\n\nThank you for playing!");
  else
    printf ("\n\nThe computer wins!!!!\n\nThank you for playing!");
  printf ("\n\nWould you like to play again? \n\nPress Y for Yes and N for No\n\n");
return 0;
}