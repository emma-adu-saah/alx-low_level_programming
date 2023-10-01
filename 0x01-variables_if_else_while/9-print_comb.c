#include <stdio.h>
/**
 *main - Prints all possible combination of single-digit numbers
 *Return: Returns an integer (0)
 **/
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i < 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
