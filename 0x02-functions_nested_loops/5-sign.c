#include "main.h"
/**
 *print_sign - Prints the sign of a number
 *@n: Number to print sign of
 *Return: 1 if n > 0, 0 if n = 0, and -1 if n < 0
 **/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('+');
return (0);
}
_putchar('-');
return (-1);
}
