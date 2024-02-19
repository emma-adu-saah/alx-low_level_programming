#include "main.h"
/**
 *str_concat - Concatenates two strings.
 *@s1: First string
 *@s2: Second string
 *Return: A pointer that points a newly allocated space in memory.
 **/
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int j, len  = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new_str = malloc(sizeof(char) * sizeof(*s1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		new_str[len] = s1[j];
		len++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		new_str[len] = s2[j];
		len++;
	}
	new_str[len + 1] = '\0';
	return (new_str);
}
