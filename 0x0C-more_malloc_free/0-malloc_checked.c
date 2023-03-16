#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc
 * Description: If malloc fails, terminate process with status 98
 * @b: unsigned int memory size to allocate
 * Return: void pointer to allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
