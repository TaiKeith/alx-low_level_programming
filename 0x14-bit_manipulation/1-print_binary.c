#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: The number to be printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i, incr = 0;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;
		if (temp & 1)
		{
			_putchar('1');
			incr++;
		}
		else if (incr)
			_putchar('0');
	}
	if (!incr)
		_putchar('0');
}
