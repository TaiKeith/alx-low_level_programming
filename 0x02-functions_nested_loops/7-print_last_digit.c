#include "main.h"

/**
 *  print_last_digit - Check main.h
 * @n: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
