//2022-11-04
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int MultiTable[12][12] = {{1,2,3,4,5,6,7,8,9,10,11,12},{1,2,3,4,5,6,7,8,9,10,11,12}};//this was a screw up numbers in table weren't needed
  char input;
  int value;
  int x;
  int y;
  
   printf ("\nWelcome to Mitchell's Prime Number Machine!\n"); //printf up here to avoid it showing if user decides to loop
    do
    {
        printf("\nPlease enter in a number between 1-144: ");
        scanf(" %d", &value);
        int result = 0;

        for (x = 1; x <= 12; x++) //Nested Loop 1 for first array
        {
          for (y = 1; y <= 12; y++) //Nested Loop 2 for second dimension of array
          {
              MultiTable[x][y] = x * y;
              
              if (result != 1)
              {
                  if (MultiTable[x][y] == value) //Formula to have the array multiply by the other number in the array to get value if not a prime #
                  {    
                      if (x != 1 && y != 1 && x != value && y != value) // Goes to next possible number if * by same number or one
                      {
                            printf("\nNumbers multiplied were \"%d\" x \"%d\" = \"%d\" \n\n", x, y, value); //Prints out result from line 33
                            result = 1;
                      }
                  }
              }
          }
        }
        if (result == 0) //Check to see if there's no other inputs before asking if they'd like to continue in the loop
        {
            printf("\nYour number given was: \%d\ \n\nNice work you found a prime number!!!!\n\n", value);
        }
        {
            printf("Do you want to play again? If so enter in \'Y\' to play again. \nIf not enter in \'N\' to quit: ");
            scanf(" %c", &input);
        }
         if (input == 'n' || input == 'N') //Why doesn't input 'No' work?
         {
            printf("\nThank you for using Mitchell's Prime Number Machine! Farewell!");
         }
    } while (input == 'y' || input == 'Y'); //Why doesn't input 'Yes' work?
}