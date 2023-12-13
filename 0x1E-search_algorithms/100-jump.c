#include "search_algos.h"

/**
 * jump_search - A function that searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int i;
	int back = 0;
	int front = 0;
	int jump = sqrt(size);

	if (size == 0 || array == NULL)
		return (-1);
	for (front = 0; front < (int)size && array[front] < value;)
	{
		printf("Value checked array[%d] = [%d]\n", front, array[front]);
		back = front;
		front += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", back, front);
	for (i = back; i <= front && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
