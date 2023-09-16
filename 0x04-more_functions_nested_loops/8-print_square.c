#include "main.h"
/**
 *print_square - Prints a square
 *@size: The size of the square
 *Return: Nothing
 **/
void print_square(int size)
{
int i;
int j = 1;
if (size <= 0)
{
_putchar('\n');
return;
}
while (j <= size)
{
for (i = 1; i <= size; i++)
{
_putchar('#');
}
_putchar('\n');
j++;
}
}
