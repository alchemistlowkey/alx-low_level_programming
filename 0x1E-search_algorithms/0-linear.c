#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
