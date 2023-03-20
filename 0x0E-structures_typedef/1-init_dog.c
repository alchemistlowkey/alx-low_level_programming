#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function
 * @d: struct dog data type
 * @name: character 1st member
 * @age: float 2nd member
 * @owner: character 3rd member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	};
}
