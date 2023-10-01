#include <stdio.h>
/**
 *main - Prints all possible different combination of two digits
 *Return: Returns 0
 **/
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
