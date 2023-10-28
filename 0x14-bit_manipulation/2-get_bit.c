#include "main.h"
/**
 *get_bit - Returns the value of a bit at a given index
 *@n: The given number
 *@index: Index starting from 0 of the bit you want to get
 *Return: Returns the value of bit at index or -1 if an error
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((int)((n >> index) & 1));
}
