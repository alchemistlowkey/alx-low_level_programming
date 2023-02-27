#include "main.h"
#include <stdio.h>

/**
 * swap_int - to swap a and b
 * @a: integer a swap
 * @b: integer b swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = b[0];
	*b = c;
}
