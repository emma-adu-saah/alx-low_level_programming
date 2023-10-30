#include "main.h"
/**
 *print_binary - Prints the binary representation of a number.
 *@n: Number to print binary representation of.
 *Return: Nothing
 **/
void print_binary(unsigned long int n)
{
	unsigned long int j, i = 0;
	char * binary = '0';

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		if (n & 1)
		{
			binary = '1';
		}
		else
		{
			binary = '0';
		}
		n = n >> 1;
		i++;
	}
	for (j = i - 1; j > 0; j--)
	{
		_putchar(binary[j]);
	}
}
