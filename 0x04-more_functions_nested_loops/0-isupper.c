#include "main.h"
/**
 * _isupper - A function that checks for upper case
 * @c: integer
 * Return: 1 (success), 0 (otherwise)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
