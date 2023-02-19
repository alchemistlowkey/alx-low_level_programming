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
		for (j = 48; j < 58; j++)
		{
			if (i != j)
			if (j != i)
			if (i < j)
			if (i && j)
			if (i != 58)
			if (j != 58)
			{
				putchar(i);
				putchar(j);
				if (i < 57)
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
