#include "search_algos.h"

/**
 * interpolation_search - A function that searches for value in a sorted array
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t diff;
	size_t curr;
	size_t down = 0;
	size_t up = size - 1;
	double grad;

	if (array == NULL || size == 0)
		return (-1);
	while (size)
	{
		grad = (double)(up - down) / (array[up] - array[down]);
		diff = (size_t)(grad * (value - array[down]));
		curr = down + diff;
		printf("Value checked array[%lu]", curr);

		if (curr >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[curr]);

		if (array[curr] == value)
			return ((int)curr);

		if (array[curr] < value)
			down = curr + 1;
		else
			up = curr - 1;

		if (down == up)
			break;
	}
	return (-1);
}
