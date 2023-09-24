#include "main.h"
/**
 *_strcpy - Copies the string pointed to by src.
 *@dest: Pointer to the buffer that will be returned
 *@src: Source of string to be copied
 *Return: A pointer to a char.
 **/
char *_strcpy(char *dest, char *src)
{
int i;
int j = 0;
while (src[j] != '\0')
{
j++;
}
for (i = 0; i < j; i++)
{
dest[i] = src[i];
}
return (dest);
}
