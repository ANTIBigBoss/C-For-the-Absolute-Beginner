#include <stdio.h>
#include <ctype.h>

int main(void) 
{
  int answer;
  int randomNum;

  srand(time(NULL));
  randomNum = (rand()%10) +1;
  
printf("\n\nPlease guess a number between 1 and 10\n\n");
scanf("%d", &answer);

  if (randomNum == answer)

printf ("\n\ncorrect!");
  else
printf ("\n\nIncorrect!");

return 0;
}