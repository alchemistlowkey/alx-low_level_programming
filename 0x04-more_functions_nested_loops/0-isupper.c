#include "main.h"
/**
 * _isupper - A function that checks for upper case
 *
 * Return: 1 (success), 0 (otherwise)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		printf("%d", c);
		return (1);
	}
	else
	{
		return (0);
	}
}
