//2022-10-21
//Number Guessing Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void)
{
srand(time(NULL));
int Number;
int Guess;
printf ("Guess a number between 1-75\n");
  scanf (" %d", &Guess);
Number = (rand()%75) +1;
    while (Number != Guess){
      if(Guess < Number)
      {
        printf ("\nThe number is higher\n");
      }
      if(Guess > Number){
                printf ("\nThe number is lower\n");
      }
        
        printf ("That number is incorrect\nPlease try another number:");
        scanf (" %d", &Guess);}
      if (Number == Guess){
        printf ("Correct The number is %d\nThanks for playing!", Number);  }  
      
  return 0;
}