#include "main.h"

/**
 * clear_bit - disable a bit
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: 1 (success).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref;

	ref = 0x01;
	ref = ~(ref << index);
	if (ref == 0x00)
	{
		return (-1);
	}
	*n = *n & ref;
	return (1);
}
