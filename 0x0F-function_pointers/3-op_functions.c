#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - A function that returns the sum of a and b
 * @a: 1st input integer
 * @b: 2nd input integer
 * Return: Result to sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that returns the subtract of a and b
 * @a: 1st input integer
 * @b: 2nd input integer
 * Return: Result to sum a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that returns the product of a and b
 * @a: 1st input integer
 * @b: 2nd input integer
 * Return: Result to sum a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that returns the reult of division of a and b
 * @a: 1st input integer
 * @b: 2nd input integer
 * Return: Result to sum a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n")
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - A function that returns the remainder of division of a and b
 * @a: 1st input integer
 * @b: 2nd input integer
 * Return: Result to sum a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
