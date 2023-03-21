#include <stdio.h>
#include <stdlib.h>

/**
 * main - Fizz Buzz
 * Return: 0
 */
int main(void)
{
	int i, j;

	j = 100;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < j)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
				printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
