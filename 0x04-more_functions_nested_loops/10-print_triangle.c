#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle made of '#' characters
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int j, i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (i < size)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= size - i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
