#include "main.h"

/**
 * _isalpha - checks for lowercase characters
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
