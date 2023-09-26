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
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}
