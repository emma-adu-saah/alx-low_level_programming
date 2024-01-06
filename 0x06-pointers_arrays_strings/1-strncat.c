#include "main.h"
/**
 *_strncat - Concatenates two strings using at most n bytes from src
 *@dest: Destination string or string to copy to
 *@src: Source string or string to be copied from
 *@n: Number of bytes to copy
 *Return: Modified dest
 **/
char *_strncat(char *dest, char *src, int n)
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
	if (n >= src_len)
	{
		n = src_len;
	}
	for (i = 0; i <= n - 1; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
