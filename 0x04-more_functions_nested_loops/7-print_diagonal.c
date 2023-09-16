#include "main.h"
/**
 *print_diagonal - Draws a diagonal line on the terminal
 *@n: Number of times to draw the diagonal
 *
 *Return: Nothing
 **/
void print_diagonal(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return;
}
else
{
for (i = 1; i <= n - 1; i++)
{
_putchar(32);
}
_putchar(92);
}
_putchar('\n');
}
