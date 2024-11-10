#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a newline.
 * @s: The string to be printed
 *
 * Description: Recursively prints each char in the string
 * until the null terminator is reached, then prints a newline.
 * Mimics the behavior of the standard puts function.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
