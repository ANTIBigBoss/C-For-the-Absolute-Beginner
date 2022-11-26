//Computer Sales Commission 
//09 25 2022
//Commission = Rate * (Sales Price - Cost)
#include <stdio.h>
int main()
{
printf ("Commission Calculator\nPlease enter following information below:\n");
int number1;
int number2;
int number3;
printf ("Enter in your hourly rate: ");
scanf ("%d", &number1);
printf ("Enter in the sales price of the item: ");
scanf ("%d", &number2);
printf ("Enter in the cost of item: ");
scanf ("%d", &number3);
printf ("Total commission = %d", (number1) * (number2 - number3));
return 0;
}