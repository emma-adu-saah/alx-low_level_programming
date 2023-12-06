#include "main.h"
/**
 *print_times_table - Prints the n times table starting with 0
 *@n: The number times table to print
 *Return: Nothing
 **/
void print_times_table(int n)
{
	int a, b, c = 0;

	if (n < 0 || n > 15)
	{
		return;
	}
	while (c <= n)
	{
		a = 0;
		while (a <= n)
		{
			b = a * c;
			if (b >= 100)
			{
				_putchar((b / 100) + '0');
				_putchar(((b / 10) % 10) + '0');
				_putchar((b % 10) + '0');
			}
			else if (b >= 10)
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
			else
			{
				_putchar(b + '0');
			}
			if (a < n)
			{
				_putchar(',');
				_putchar(' ');
				if (c * (a + 1) <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (c * (a + 1) > 9 && c * (a + 1) < 100)
				{
					_putchar(' ');
				}
			}
			a++;
		}
		_putchar('\n');
		c++;
	}
}
