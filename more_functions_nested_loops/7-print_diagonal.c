#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 *@n: number of times the character '\' should be printed
 *
 * Description: This function draws a diagonal line on the terminal
 * ending with a new line.
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
	}
	_putchar('\n');
}
