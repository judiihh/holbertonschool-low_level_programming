#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Description: this function takes two integers as input
 * and returns their sum.
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Description: this function takes two integers as input and
 * returns the result of subtracting b from a.
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Description: this function takes two integers as input and
 * returns their product.
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the numerator
 * @b: the denominator
 *
 * Description: this function takes two integers as input and
 * returns the result of dividing a by b. If b is 0,
 * the function prints an error message and exits
 * with status 100.
 *
 * Return: the quotient of a divided by b.
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
 * op_mod - computes the remainder of the division of two integers
 * @a: the numerator
 * @b: the denominator
 *
 * Description: this function takes two integers as input and
 * returns the remainder of a divided by b. If b is 0,
 * the function prints an error message and exits
 * with status 100.
 *
 * Return: the remainder of a divided by b.
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
