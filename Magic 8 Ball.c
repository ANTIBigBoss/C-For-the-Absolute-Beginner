 //Magic 8 Ball
//10 03 2022

#include <stdio.h>
#include <ctype.h>
#include <time.h>

int main(void) 
{
  int response;
  char question;
  srand(time(NULL));
  printf ("\nAsk the Magic Computer 8 Ball a question! Any question!\n\n");
  scanf("%c", &question);
  response = (rand()%8) +1;
  switch (response)
  {
  case 1:
    printf ("\nI mean probably");
    break;
  case 2:
    printf ("\nNot feeling up to it ask again later");
    break;
  case 3:
    printf ("\nHello world, that is not possible!");
    break;
  case 4:
    printf ("\nYeah do it NOW!!");
    break;
  case 5:
    printf ("\nEhhh");
    break;
  case 6:
    printf ("\n404 error not found please try again");
    break;
  case 7:
    printf ("\nThat's a pretty good idea");
    break;
  case 8:
    printf ("\nI wouldn't but hey it's your life");
    break;
  }
return 0;
}