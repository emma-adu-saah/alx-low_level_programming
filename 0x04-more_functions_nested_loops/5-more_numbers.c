#include "main.h"
/**
 *more_numbers - Prints 10 times the numbers from 0 to 14
 *
 *Return: Nothing
 **/
void more_numbers(void)
{
int i, num;
for (i = 0; i < 10; i++)
{
for (num = 0; num <= 14; num++)
{
_putchar('0' + num);
}
_putchar('\n');
}
}
