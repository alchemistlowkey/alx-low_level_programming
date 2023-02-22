#include "main.h"
/**
 * _isalpha - A function that checks for alphabet
 * @c: alphabet to be checked
 * Return: 1 (success) 0 (otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && <= 122))
		return (1);
	else
		return (0);
}
