#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - Returns the length of a string
 *@s: String to return length of
 *Return: An integer which is the len of a string
 **/
int _strlen_recursion(char *s)
{
int i;
if (*s == '\0')
{
return 0;
}
i = _strlen_recursion(s + 1);
return i + 1;
}
