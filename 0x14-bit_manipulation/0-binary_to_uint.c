#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: A pointer to a string of binary
 *
 * Return: The converted number or 0 if chars in string is not binary or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int gross, raiseto;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (raiseto = 1, gross = 0, len--; len >= 0; len--, raiseto *= 2)
	{
		if (b[len] == '1')
			gross += raiseto;
	}
	return (gross);
}
