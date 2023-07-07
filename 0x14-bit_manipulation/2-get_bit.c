#include "main.h"

/**
 * get_bit - return value function
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
