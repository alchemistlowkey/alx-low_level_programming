#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - A function that prints to stdout
 * @c: character
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
