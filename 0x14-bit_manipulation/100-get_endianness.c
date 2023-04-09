#include "main.h"

/**
 * get_endianness - Endianness check function
 * Return: 0 or 1.
 */
int get_endianness(void)
{
	int i;
	char *b;

	i = 1;
	b = (char *)&i;
	if (*b)
	{
		return (1);
	}
	return (0);
}
