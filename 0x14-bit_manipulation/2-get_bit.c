#include "main.h"

/**
 * get_bit - return value function
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ref;

	ref = 0x01;
	ref <<= index;
	if ((ref == 0))
	{
		return (-1);
	}
	if ((n & ref))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
