#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: Pointer to name to print
 * @f: Function to print name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
