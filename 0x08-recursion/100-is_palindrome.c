#include "main.h"
/**
*check_pal - Helper function to check if a string is a palindrome recursively
*@s: String to check
*@i: Iterator
*@len: Length of the string
*Return: 1 if palindrome, 0 if not
**/
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
/**
*_strlen_recursion - Returns the length of a string
*@s: String to calculate the length of
*Return: Length of the string
**/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
*is_palindrome - Checks if a string is a palindrome
*@s: String to reverse
*Return: 1 if it is a palindrome, 0 if not
**/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
