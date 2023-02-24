#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
