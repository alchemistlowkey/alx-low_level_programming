#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - all characters to lower case
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = "a"; c <= "z"; c++)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
