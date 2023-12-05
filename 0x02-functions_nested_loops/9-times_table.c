#include "main.h"
/**
 *times_table - Prints the 9 times table
 *Return: Nothing
 **/
void times_table(void)
{
	int j, i, b = 0;

	while (b <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			j = b * i;
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar(j + '0');
			}
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (b * (i + 1) <= 9)
				{
					_putchar(' ');
				}
			}
			i++;
		}
		_putchar('\n');
		b++;
	}
}
