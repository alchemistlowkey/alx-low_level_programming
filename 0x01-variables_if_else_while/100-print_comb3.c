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

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; i <= 9; j++)
		{
			putchar(i);
			putchar(j);
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
