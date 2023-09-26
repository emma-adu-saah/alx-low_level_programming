#include "main.h"
/**
 *_strspn - Gets the length of a prefix substring
 *@s: String to return segment byte from
 *@accept: Prefix string
 *Return: Number of bytes of a prefix string
 **/
unsigned int _strspn(char *s, char *accept)
{
  unsigned int j = 0;
  while (*s != '\0' && *s == *accept)
    {
      j++;
    }
  return (j);
}
