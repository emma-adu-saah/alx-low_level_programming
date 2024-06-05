#include "main.h"
#include <stdio.h>
/**
 *argstostr - Concatenates all the commandline arguments
 *@ac: Arguments count
 *@av: Pointer to pointers of all the commandline arguments
 *Return: A pointer to a new string, or NULL if it fails
 **/
char *argstostr(int ac, char **av)
{
	char *new_string;
	int i, j, string_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *av[i] != '\0'; j++)
		{
			string_len++;
		}
	}

	new_string = malloc((sizeof(char) * string_len) + ac - 1);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *av[i][j] != '\0'; j++)
		{
			new_string += av[i][j];
			new_string += '\n';
		}
	}
	return (new_string);
}
