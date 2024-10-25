#include "main.h"
#include <stdio.h>

/**
 * times_table - main function
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
		result = row * col;

		if (col != 0)
			putchar(','), putchar(' ');
		if (result < 10 && col != 0)
			putchar(' ');
		if (result >= 10)
			putchar((result / 10) + '0');
		putchar((result % 10) + '0');
		}
	putchar('\n');
	}
}
