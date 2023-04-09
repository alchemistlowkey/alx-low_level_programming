#include "main.h"

/**
 * set_bit - bit enabling
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref;

	ref = 0x01;
	ref <<= index;
	if (ref == 0)
	{
		return (-1);
	}
	*n |= ref;
	return (1);
}
