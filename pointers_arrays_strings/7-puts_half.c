#include "main.h"
#include "2-strlen.c"
#include "6-puts2.c"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to be printed.
 *
 * Description: If the string has an odd number of chars, the function
 * starts printing from (length - 1) / 2 + 1. If it has an even
 * number of chars, it starts from length / 2. A newline is
 * printed after the chars.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start;
	int i;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
