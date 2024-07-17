#include "search_algos.h"

/**
 * jump_search - A function that searches for a value in a sorted array
 * @array: Pointer to the first element of an array
 * @size: Number of elements in an array
 * @value: Value to search for
 *
 * Return: The index of the value || -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump_step, prev;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = sqrt(size);
	for (i = prev = 0; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		i = prev;
		prev += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev);

	prev = prev < size - 1 ? prev : size - 1;
	for (; i < prev && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
