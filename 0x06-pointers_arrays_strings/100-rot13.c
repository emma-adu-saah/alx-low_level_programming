#include "main.h"
/**
 *rot13 - Encodes a string using rot13
 *@str: String to encode
 *Return: The encoded string
 **/
char *rot13(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] > 77 || string[i] > 109)
		{
			string[i] = i + 13;
		}
		else
		{
			string[i] = i - 13;
		}
	}
	return (string);
}
