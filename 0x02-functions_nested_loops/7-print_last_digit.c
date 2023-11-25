#include "main.h"
/**
 *print_last_digit - Prints the last digit of a number
 *@n: Number to print last digit of
 *Return: The value of the last digit
 **/
int print_last_digit(int n)
{
int lastDigit;
lastDigit = n % 10;
if (n < 0)
{
lastDigit = -lastDigit;
}
_putchar(lastDigit + '0');
return (lastDigit);
}
