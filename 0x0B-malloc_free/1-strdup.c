#include "main.h"
/**
 *_strdup - Returns a pointer to a newly space in memory
 *@str: Given string to be copied
 *Return: NULL str == NULL || Pointer to dup string
 **/
char *_strdup(char *str)
{
char *new_str;
int i, j;
if (str == NULL)
{
return (NULL);
}
j = 0;
for (i = 0; str[i] != '\0'; i++)
{
j++;
}
new_str = malloc(sizeof(char)  * (j + 1));
if (new_str == NULL)
{
	return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
new_str[i] = str[i];
}
new_str[j] = '\0';
return (new_str);
}
