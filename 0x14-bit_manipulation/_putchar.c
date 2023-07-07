#include "main.h"

/**
 * _putchar - putchar edit
 * @c:character
 * Return: write to stdout
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
