#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: is the size of the square
 *
 * Description: This functions prints a square
 * ending with a new line.
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
