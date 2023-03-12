#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program name
 * @argc: arguments count
 * @coins: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	(void) argv;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; coins[i] != '\0'; i++)
	{
		while (coins[i] >= 25)
		{
			if (coins[i] % 25 == 0)
			{
				change = coins[i] / 25;
			}
			else if (coins[i] % 25 == 1 || coins[i] % 25 == 2 || coins[i] % 25 == 5 || coins[i] % 25 == 10)
			{
				change = (coins[i] / 25) + 1;
			}
			else if (coins[i] % 25 == 3 || coins[i] % 25 == 4 || coins[i] % 25 == 6 || coins[i] % 25 == 7 || coins[i] % 25 == 11 || coins[i] % 25 == 12 || coins[i] % 25 == 15 || coins[i] % 25 == 20)
			{
				change = (coins[i] / 25) + 2;
			}
			else if (coins[i] % 25 == 8 || coins[i] % 25 == 9 || coins[i] % 25 == 13 || coins[i] % 25 == 14 || coins[i] % 25 == 16 || coins[i] % 25 == 17 || coins[i] % 25 == 21 || coins[i] % 25 == 22)
			{
				change = (coins[i] / 25) + 3;
			}
			else if (coins[i] % 25 == 18 || coins[i] % 25 == 19 || coins[i] % 25 == 23 || coins[i] % 25 == 24)
			{
				change = (coins[i] / 25) + 4;
			}
		}
		while (coins[i] >= 10 && coins[i] < 25)
		{
			if (coins[i] % 10 == 0)
			{
				change = coins[i] / 10;
			}
			else if (coins[i] % 10 == 1 || coins[i] % 10 == 2 || coins[i] % 10 == 5)
			{
				change = (coins[i] / 10) + 1;
			}
			else if (coins[i] % 10 == 3 || coins[i] % 10 == 4 || coins[i] % 10 == 6 || coins[i] % 10 == 7)
			{
				change = (coins[i] / 10) + 2;
			}
			else if (coins[i] % 10 == 8 || coins[i] % 10 == 9)
			{
				change = (coins[i] / 10) + 3;
			}
		}
		while (coins[i] >= 5 && coins[i] < 10)
		{
			if (coins[i] % 5 == 0)
			{
				change = coins[i] / 5;
			}
			else if (coins[i] % 5 == 1 || coins[i] % 5 == 2)
			{
				change = (coins[i] / 5) + 1;
			}
			else if (coins[i] % 5 == 3 || coins[i] % 5 == 4)
			{
				change = (coins[i] / 5) + 2;
			}
		}
		while (coins[i] > 1 && coins[i] < 5)
		{
			if (coins[i] % 2 == 0)
			{
				change = coins[i] / 2;
			}
			else
			{
				change = (coins[i] / 2) + 1;
			}
		}
		while (coins[i] <= 1)
		{
			if (coins[i] == 1)
			{
				change = 1;
			}
			else
			{
				change = 0;
			}
		}
		printf("%d\n", change);
	}
	return (0);
}
