#include "main.h"

/**
 * binary_to_unit - A function that converts a binary number to an unsigned int
 * @b: A pointer to a string of binary
 *
 * Return: The converted number or 0 if chars in string is not binary or NULL
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int gross = 0, raiseto = 1;
	int str;

	if (b == NULL)
		return (0);

	while (b[str])
		str++;

	while (str)
	{
		if (b[str - 1] != '0' && b[str - 1] != '1')
		{
			return (0);
		}
		if (b[str - 1] == '1')
		{
			gross += raiseto;
		}
		raiseto *= 2;
		str--;
	}
	return (gross);
}
