#include "main.h"
#include <stdio.h>
/**
 *_strchr - Locates a character in a string
 *@s: The string to search for character
 *@c: Character to search for
 *Return: Pointer to character or NULL
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
