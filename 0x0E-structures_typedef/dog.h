#ifndef dog_h
#define dog_h
#include <stdio.h>

/**
 * struct dog - data type
 * @name: character 1st member
 * @age: float 2nd member
 * @owner: character 3rd member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
