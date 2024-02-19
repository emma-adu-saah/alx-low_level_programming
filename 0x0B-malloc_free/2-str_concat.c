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
	int j, len_s1  = 0, len_s2 = 0, total_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	total_len = len_s1 + len_s2;
	new_str = malloc(sizeof(char) * (total_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		new_str[j] = s1[j];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		new_str[len_s1] = s2[j];
		len_s1++;
	}
	new_str[len_s1] = '\0';
	return (new_str);
}
