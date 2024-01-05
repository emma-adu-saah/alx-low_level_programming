#include "main.h"
/**
 *_strcat - Concatenates two strings
 *@dest: Beginning string
 *@src: String to append
 *Return: The result of the concatenation
 **/
char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0, src_len = 0;
	while (*dest != '\0')
	{
		dest_len++;
		dest++;
	}
	while (*src != '\0')
	{
		src_len++;
		src++;
	}
	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	return (dest);
}
