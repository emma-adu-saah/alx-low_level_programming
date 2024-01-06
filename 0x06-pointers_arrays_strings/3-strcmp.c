#include "main.h"
#include <string.h>
/**
 *_strcmp - Compares two strings
 *@s1: First string to compare
 *@s2: Second string to compare
 *Return: An integer of the string
 **/
int _strcmp(char *s1, char *s2)
{
	int i, result = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
