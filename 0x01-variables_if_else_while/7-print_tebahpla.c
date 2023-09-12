#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Return 0
 **/
int main(void)
{
char lowerCase = 'z';
while (lowerCase >= 'a')
{
putchar(lowerCase);
lowerCase--;
}
putchar('\n');
return (0);
}
