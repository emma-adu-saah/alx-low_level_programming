#include "main.h"
/**
 *_memset - Fills memory with a constant byte.
 *@s: Pointer to the memory area
 *@b: The constant byte to fill the memory area
 *@n: The first n bytes of the memory area
 *Return: A pointer to the memory
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n - 1; i++)
{
s[i] = b;
}
return (s);
}
