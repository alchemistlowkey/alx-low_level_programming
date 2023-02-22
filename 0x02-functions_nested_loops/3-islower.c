#include "main.h"
/**
 * _islower - A function that checks for lower case character
 * Return: 1 (success) 0 (otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
