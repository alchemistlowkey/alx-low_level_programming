#include <stdio.h>

/**
 * main - find and print the largest prime factors
 * Return: 0
 */
int main(void)
{
	unsigned long int i, j;

	for (i = 3; i < 12057; i = i + 2)
	{
		for (j = 612852475143; j != i && j % i == 0;)
		{
			j = j / i;
		}
	}
	printf("%lu\n", j);
	return (0);
}
