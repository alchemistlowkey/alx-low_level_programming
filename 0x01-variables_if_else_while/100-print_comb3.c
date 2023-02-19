#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - possible combinations of 0 and 1
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; i < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 57)
			if (j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
