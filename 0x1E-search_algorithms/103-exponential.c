#include "search_algos.h"

/**
 * exponential_search - A function that searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	size_t back, front, center;
	size_t b = 1;

	if (array == NULL || size == 0)
		return (-1);
	while (b < size && array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		b *= 2;
	}
	back = b / 2;
	front = (b < size - 1) ? b : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", back, front);
	for (back = 0; back <= front;)
	{
		center = (back + front) / 2;
		printf("Searching in array: ");
		for (i = back; i <= front; ++i)
		{
			printf("%d", array[i]);
			if (i < front)
				printf(", ");
		}
		printf("\n");
		if (array[center] == value)
			return ((int)center);

		if (array[center] < value)
			back = center + 1;
		else
			front = center - 1;
	}
	return (-1);
}
