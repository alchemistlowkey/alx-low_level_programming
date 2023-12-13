#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int back;
	int front = size - 1;
	int center;

	if (array == NULL)
		return (-1);

	for (back = 0; back <= front;)
	{
		printf("Searching in array: ");

		for (i = back; i <= front; ++i)
		{
			printf("%d", array[i]);
			if (i < front)
			{
				printf(", ");
			}
		}
		printf("\n");
		center = back + (front - back) / 2;
		if (array[center] == value)
		{
			return (center);
		}
		if (array[center] < value)
		{
			back = center + 1;
		}
		else
		{
			front = center - 1;
		}
	}
	return (-1);
}
