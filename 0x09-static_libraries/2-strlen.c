#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: String to return its length
 *Return: An integer
 **/
int _strlen(char *s)
{
int len = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
len = len + 1;
}
return (len);
}
