#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - frees dogs.
 *@d: dog to free
 *
 *Return: Nothing
 **/

void free_dog(dog_t *d)
{
	free(d);
}
