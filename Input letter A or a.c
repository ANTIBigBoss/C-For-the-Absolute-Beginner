#include <stdio.h>

int main(void) 
{
char answer;
printf ("Please enter in the letter A or a.\n");
scanf (" %c", &answer);
if (answer == 'A' || answer == 'a')
printf ("Correct! You can follow basic instructions!");

else
printf ("Wow what a rebel you really showed me you badass");

  return 0;
}