#include "main.h"

/**
 * binary_to_unit - A function that converts a binary number to an unsigned int
 * @b: A pointer to a string of binary
 *
 * Return: The converted number or 0 if chars in string is not binary or NULL
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int gross, raiseto, str;

	if (b == NULL)
		return (0);

	for (str = 0; b[str]; str++)
	{
		if (b[str] != '0' && b[str] != '1')
			return (0);
	}

	while (b[str] != '\0')
	{
		for (gross = 0, raiseto = 1; raiseto *= 2)
		{
			if (b[str] == '0')
			{
				gross += raiseto;
			}
			else
			{
				gross += raiseto + 1;
			}
		}
		return (gross);
	}
}
