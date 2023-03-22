#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name from a function pointer
 * @name: char string
 * @f: Function pointer that takes a string argument
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
