#include "main.h"
/**
 *print_line - Draws a straight line in the terminal
 *@n: Number of lines to print
 *Return: Nothing
 **/
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}

