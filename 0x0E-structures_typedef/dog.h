#ifndef dog_h
#define dog_h
#include <stdio.h>

/**
 * struct dog - data type
 * @name: character 1st member
 * @age: float 2nd member
 * @owner: character 3rd member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
