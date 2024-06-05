#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the variable of type struct dog
 * @name: Member 1
 * @age: Member 2
 * @owner: Member 3
 * Return: Nothing
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* d = malloc(sizeof(struct dog)); */
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
