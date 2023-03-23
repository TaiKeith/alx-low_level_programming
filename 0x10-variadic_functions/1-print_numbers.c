#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @separator: An input string to be printed between numbers
 * @n: Number of parameters
 * @...: Other parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int numbs;

	va_start(ap, n);
	for (; i < n; i++)
	{
		numbs = va_arg(ap, int);
		printf("%d", numbs);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
