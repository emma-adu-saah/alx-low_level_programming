#include "main.h"
/**
 *print_binary - Prints the binary representation of a number.
 *@n: Number to print binary representation of.
 *Return: Nothing
 **/
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		if (n & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		n = n >> 1;
		i++;
	}
}
