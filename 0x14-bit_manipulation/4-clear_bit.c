#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: A pointer to the number
 *@index: The index of the bit to clear
 *Return: 1 if it worked or -1 if error
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~mask);
		return (1);
	}
	return (-1);
}
