#include "main.h"
#include <ctype.h>
/**
 *_isupper - Checks if a character is an upper case
 *@c: Character to test
 *Return: 1 if letter i c and 0 if otherwise
 **/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
