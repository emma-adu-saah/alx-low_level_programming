#include "main.h"
/**
 *_isdigit - Checks if @c is a digit
 *@c: Character to check
 *Return: 1 if @c is a digit and 0 if not
 **/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
return (0);
}
