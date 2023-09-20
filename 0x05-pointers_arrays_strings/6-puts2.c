#include "main.h"
/**
 *puts2 - Prints every other character of a string, starting with the first
 *@str: String to print
 *Return: Nothing
 **/
void puts2(char *str)
{
  int i;
  for (i = 0; str[i] !='\0'; i = i + 2)
    {
      _putchar(str[i]);
    }
  _putchar('\n');
}
