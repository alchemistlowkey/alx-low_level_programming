#include "main.h"

/**
 * flip_bits - function for number of bits for flipping
 * @n: unsigned long integer
 * @m: unsigned long integer
 * Return: i
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, ref, flip;

	ref = 0x01;
	flip = (m ^ n);
	for (i = 0; ref <= flip;)
	{
		if (ref & flip)
		{
			i++;
		}
		ref = ref << 1;
	}
	return (i);
}
