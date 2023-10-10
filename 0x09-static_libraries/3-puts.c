#include "main.h"
/**
 *_puts - Prints a string, followed by a new line, to stdout.
 *@s: String to print
 *Return: Nothing
 **/
void _puts(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
