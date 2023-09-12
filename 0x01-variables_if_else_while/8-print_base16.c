#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Return 0
 **/
int main(void)
{
int num;
char letter = 'a';
for (num = 0; num <= 9; num++)
putchar('0' + num);
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
