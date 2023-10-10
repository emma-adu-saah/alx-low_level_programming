#include "main.h"
/**
 *_isalpha - Checks for alphabetic character
 *@c: Character to check
 *Return: 1 if c is an alphabet, 0 if otherwise
 **/
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
return (0);
}
