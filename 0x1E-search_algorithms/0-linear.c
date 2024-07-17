#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array
 * @array: Pointer to the first element of an array
 * @size: Number of elements in an array
 * @value: Value to search for
 *
 * Return: The index of the value || -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
