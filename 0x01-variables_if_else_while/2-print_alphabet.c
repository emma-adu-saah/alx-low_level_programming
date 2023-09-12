#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Return 0
 **/
int main(void)
{
char lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase++;
}
putchar('\n');
return (0);
}
