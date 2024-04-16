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
	int i = 0;
	char *ptr;

	if (c == '\0')
		return (s);
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			ptr = &s[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
