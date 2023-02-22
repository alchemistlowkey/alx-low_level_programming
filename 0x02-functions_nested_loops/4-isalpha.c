#include "main.h"
/**
 * _isalpha - A function that checks for alphabet
 * @c: alphabet to be checked
 * Return: 1 (success) 0 (otherwise)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && <= 90)
		return (1);
	else
		return (0);
}
