#include "main.h"
/**
 *set_bit - Sets the value of a bit to 1 at a given index
 *@n: Number to be given
 *@index: Index starting from 0
 *Return: 1 if it worked || -1 if error
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
