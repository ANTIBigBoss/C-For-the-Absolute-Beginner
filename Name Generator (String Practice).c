//Mitchell Lauzon
//Name Backwards Assignment - Lab 05
//2022-11-09

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) 
{
 char Name[50];
 char end;
 char x;
 char answer;
  
 printf ("Welcome to Mitch's name generator! \nIf you would like to play enter in Y/y for 'Yes' and N/n for 'No':");
 scanf ( "%c", &answer);  
  
  while (answer == 'y')
  {
   printf("\nEnter in your name and I'll give it to you backwards and with a * in between each letter: ");
   scanf("%s", Name);
    
   end = strlen(Name) - 1; //Figures out where the end of the name is
   for (x = end; x >= 0; --x)//Opposite of a normal for loop since going in reverse for the name
   {
     if (x == 0) //if statement to not have the * appear at beginning and end of name
      printf("%c", Name[x]); //Makes it not print before and after
        else
         printf("%c*", Name[x]);//Makes sure it still prints between other letters
   }
   printf ("\n\nWould you like to play again enter in Y/y for 'Yes' and N/n for 'No':");   
   scanf (" %c", &answer);
    while (answer == 'n')
    {
     printf ("\nThanks have a great day!");
     return 0;
    }
  }
}