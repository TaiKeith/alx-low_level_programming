#include "main.h"

/**
 * flip_bits - A function that returns the number of bits needed to flip to get
 * from one number to another
 * @n: The first number
 * @m: The second number to be converted to
 *
 * Return: The number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	unsigned long int flipto = n ^ m;
	int i, incr = 0;

	for (i = 63; i >= 0; i--)
	{
		temp = flipto >> i;
		if (temp & 1)
			incr++;
	}
	return (incr);
}
