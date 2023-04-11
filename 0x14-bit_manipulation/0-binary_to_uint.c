#include "main.h"

/**
 * binary_to_unit - A function that converts a binary number to an unsigned int
 * @b: A pointer to a string of binary
 *
 * Return: The converted number or 0 if chars in string is not binary or NULL
 */
unsigned int binary_to_unit(const char *b)
{
	int str;
	unsigned int val = 0;

	if (!b)
	{
		return (0);
	}

	for (str = 0; b[str]; str++)
	{
		if (b[str] != '0' && b[str] != '1')
		{
			return (0);
		}
		val = 2 * val + (b[str] - '0')
	}
	return (val);
}
