#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function to create a new dog.
 * @name: character 1st member
 * @age: character 2nd member
 * @owner: character 3rd member
 * Return: new_d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int i, newname, newowner;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL || !(name) || !(owner))
	{
		free(new_d);
		return (NULL);
	}
	for (newname = 0; name[newname]; newname++)
		;
	for (newowner = 0; owner[newowner]; newowner++)
		;
	new_d->name = malloc(newname + 1);
	new_d->owner = malloc(newowner + 1);

	if (!(new_d->name) || !(new_d->owner))
	{
		free(new_d->owner);
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	for (i = 0; i < newname; i++)
	{
		new_d->name[i] = name[i];
	}
	new_d->name[i] = '\0';
	new_d->age = age;
	for (i = 0; i < newowner; i++)
	{
		new_d->owner[i] = owner[i];
	}
	new_d->owner[i] = '\0';
	return (new_d);
}
