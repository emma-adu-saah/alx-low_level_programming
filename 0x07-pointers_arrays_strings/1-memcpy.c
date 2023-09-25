#include "main.h"
/**
 *_memcpy - Copies memory area.
 *@dest: Destination of the copied memory area
 *@src: Source to memory
 *@n: Bytes from memory area src
 *Return: Returns a pointer to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return dest;
}
