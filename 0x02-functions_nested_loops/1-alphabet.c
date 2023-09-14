#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - Prints the alphabet in lowercase
 *
 *Return: Returns 0
 **/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
