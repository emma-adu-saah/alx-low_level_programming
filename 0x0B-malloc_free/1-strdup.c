#include "main.h"
/**
 *_strdup - Returns a pointer to a newly space in memory
 *@str: Given string to be copied
 *Return: NULL str == NULL || Pointer to dup string
 **/
char *_strdup(char *str)
{
char *new_str;
int i;
if (str == NULL)
{
return (NULL);
}
new_str = malloc(sizeof(str));
for (i = 0; str[i] != '\0'; i++)
{
new_str[i] = str[i];
}
free(new_str);
return (new_str);
}
