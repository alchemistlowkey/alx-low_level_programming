#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned integer
 * @b: constant integer
 * Return: j (unsigned integer)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, k;

	if (b == NULL)
	{
		return (0);
	}
	j = 0;
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		if (b[i])
		{
			k = (b[i] - '0');
			j = 2 * j + k;
		}
	}
	return (j);
}
