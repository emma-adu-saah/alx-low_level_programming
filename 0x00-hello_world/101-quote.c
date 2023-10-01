#include <stdio.h>
/**
 *main - Entry point
 *Return - Returns 1
 **/
int main ()
{
char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i;
for (i = 0; text[i] != '\0'; i++)
{
putchar(text[i]);
}
putchar('\n');
return (1);
}
