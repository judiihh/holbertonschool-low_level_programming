#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 * @a: the first integer
 * @b: the second integer
 *
 * return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: The numerator
 * @b: The denominator
 *
 * Return: The quotient of a and b
 * Exits with 100 if b is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes the modulo of two integers
 * @a: The numerator
 * @b: The denominator
 *
 * Return: The remainder of a divided by b
 * Exits with 100 if b is 0
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
