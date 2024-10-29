#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: is the size of the triangle
 *
 * Description: This functions prints a triangle
 * ending with a new line.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
