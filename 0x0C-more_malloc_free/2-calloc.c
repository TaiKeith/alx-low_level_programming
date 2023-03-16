#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *k;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);

	for (; i < nmemb; i++)
		k[i] = 0;

	return (k);
}
