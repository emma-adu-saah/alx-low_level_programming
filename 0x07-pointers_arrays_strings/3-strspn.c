#include "main.h"
/**
 *_strspn - Gets the length of a prefix substring
 *@s: String to return segment byte from
 *@accept: Prefix string
 *Return: Number of bytes of a prefix string
 **/
unsigned int _strspn(char *s, char *accept)
{
  unsigned int b = 0;
  int i, j;
  for (i = 0; accept
