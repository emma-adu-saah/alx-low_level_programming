#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*positive_or_negative - Entry Point
*
*Return: Return 0
**/
int positive_or_negative(int i)
{
srand(time(0));
/*n = rand() - RAND_MAX / 2;*/
/* your code goes there */
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
return (0);
}
