#include "main.h"
#include <stdio.h>

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: The number to be printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int incr = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for ((n >>= 1) > 0; incr++)
		;
	for (; incr >= 0; incr--)
	{
		if ((n >> incr) & 1)
			printf("1");
		else
			printf("0");
	}
}
