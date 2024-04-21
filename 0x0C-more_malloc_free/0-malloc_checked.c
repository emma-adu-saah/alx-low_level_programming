#include "main.h"
/**
 *malloc_checked - Allocates memory using malloc
 *@b: Amount of bytes to allocate
 *Return: A pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
