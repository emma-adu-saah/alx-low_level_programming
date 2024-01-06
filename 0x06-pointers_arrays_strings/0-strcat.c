#include "main.h"
#include <stdio.h>
/**
 *_strcat - Concatenates two strings
 *@dest: Beginning string
 *@src: String to append
 *Return: The result of the concatenation
 **/
char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0, src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
