#include "main.h"
/**
 *_puts - Prints a string, followed by a new line, to stdout.
 *@str: String to print
 *Return: Nothing
 **/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
