#include "main.h"
/**
 *print_number - Prints an integer
 *@n: Integer to print
 *Return: Nothing
 **/
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar("-");
		number *= -1;
	}
	while (number / 10)
	{
	     
