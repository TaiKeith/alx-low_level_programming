#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		_putchar("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		_putchar("%d\n", result);
		return (0);
	}
}
