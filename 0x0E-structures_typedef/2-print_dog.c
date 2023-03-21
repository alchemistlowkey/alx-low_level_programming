#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function
 * @d: struct dog data type
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		if (!(d->age))
		{
			printf("Age: (nil)\n");
		}
		if (d == NULL)
		{
			exit(0);
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
