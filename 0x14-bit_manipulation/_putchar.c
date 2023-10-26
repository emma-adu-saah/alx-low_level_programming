#include <unistd.h>
#include "main.h"

/**
 *_putchar - Writes a character to the standard output
 *@c: Character to be written to standard output
 *Return: Return the character to be written.
 **/
int _putchar(char c)
{
  return (write(1, &c, 1));
}
