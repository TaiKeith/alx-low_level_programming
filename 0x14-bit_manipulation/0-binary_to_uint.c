#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: A pointer to a binary string
 *
 * Return: The converted number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int raise = 1, gross = 0, incr = 0;

	if (b == NULL)
		return (0);
	while (b[incr])
		incr++;

	while (incr)
	{
		if (b[incr - 1] != '0' && b[incr - 1] != '1')
		{
			return (0);
		}
		if (b[incr - 1] == '1')
			gross += raise;
		raise *= 2;
		incr--;
	}
	return (gross);
}
