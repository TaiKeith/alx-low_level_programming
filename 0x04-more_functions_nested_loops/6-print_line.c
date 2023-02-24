#include "stdio.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 48;

	if (n > 48)
	{
		for (; i < n; i++)
			_putchar(95);
	}
	_putchar('\n');
}