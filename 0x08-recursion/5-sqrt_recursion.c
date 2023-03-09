#include "main.h"

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: int number
 * Return: if no natural square root, return -1. Else return
 * natural square root
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
 * helper - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against 'c'
 * Return: square root if natural square root, or -1 if none found
 */

int helper(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (helper(c, i + 1));
	else
		return (-1);
}
