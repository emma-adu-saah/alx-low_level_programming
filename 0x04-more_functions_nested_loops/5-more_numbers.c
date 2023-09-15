#include "main.h"
/**
 *more_numbers - Prints 10 times the numbers from 0 to 14
 *
 *Return: Nothing
 **/
void more_numbers(void)
{
int i;
char num;
for (i = 0; i < 10; i++)
{
num = 0;
while (num <= 14)
{
_putchar('0' + num);
num++;
}
_putchar('\n');
}
}
