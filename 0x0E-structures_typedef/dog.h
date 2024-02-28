#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 *struct dog - Defines the blueprint of a dog
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
