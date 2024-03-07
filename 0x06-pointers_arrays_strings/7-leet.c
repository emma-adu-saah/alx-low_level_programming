#include "main.h"
/**
 *leet - Encodes a string into 1337
 *@str: String to encode
 *Return: Encoded string
 **/
char *leet(char *str)
{
	int i, j;
	char new_leet[] = {
		'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1'
	};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; new_leet[j] != '\0'; j++)
		{
			if (new_leet[j] == str[i] || new_leet[j] == str[i] + 32)
			{
				str[i] = new_leet[j + 1];
				break;
			}
		}
	}
	return (str);
}
