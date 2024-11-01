#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string to measure
 *
 * Description: Iterates through the string pointed to by s,
 * counting each character until it reaches the
 * null terminator, then returns the length.
 *
 * Return: Length of the string (number of characters before '\0
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
