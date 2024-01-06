#include "main.h"
/**
 *_strncpy - Copies an n bytes of string
 *@dest: Destination of copied string
 *@src: Where string is copied from
 *@n: Number bytes of string to copy
 *Return: Copied string
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
