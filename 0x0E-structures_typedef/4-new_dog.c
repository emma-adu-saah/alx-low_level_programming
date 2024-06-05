#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: A pointer of type dog_t to the new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *created_dog = malloc(sizeof(dog_t));

	if (created_dog == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		free(created_dog);
		free(name);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(created_dog);
		free(owner);
		return (NULL);
	}
	created_dog->name = name;
	created_dog->age = age;
	created_dog->owner = owner;
	return (created_dog);
}
