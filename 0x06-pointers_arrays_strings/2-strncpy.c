#include "main.h"
#include <stdio.h>
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


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
