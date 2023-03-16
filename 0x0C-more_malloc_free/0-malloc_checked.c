#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc
 * Description: If malloc fails, terminate process with status 98
 * @b: unsigned int memory size to allocate
 * Return: void pointer to allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);

	if (k == NULL)
		exit(98);

	return (k);
}
