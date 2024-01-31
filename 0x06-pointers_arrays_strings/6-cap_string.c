#include "main.h"
/**
 *cap_string - Capitalizes all words of a string
 *@str: String to capitalize
 *Return: The capitalized string
 **/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == '.' || str[i] == ';' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
