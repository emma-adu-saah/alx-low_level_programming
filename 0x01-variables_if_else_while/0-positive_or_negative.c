#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Entry Point
*
*Return: Return 0
**/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("The number %d is positive\n", n);
}
else if (n < 0)
{
printf("The number %d is negative\n", n);
}
else
{
printf("The number %d is zero\n", n);
}
return (0);
}
