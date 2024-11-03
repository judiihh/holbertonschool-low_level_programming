#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Description: This function converts the initial part of a string
 *              to an integer, considering all '+' and '-' signs
 *              before the number. If no digits are found, it returns 0.
 *              Conversion stops when a non-digit character is encountered
 *              after digits have started.
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			if (sign == 1 && result > (INT_MAX - digit) / 10)
				return (INT_MAX);
			if (sign == -1 && result > (INT_MAX - digit) / 10)
				return (INT_MIN);

			result = result * 10 + digit;
			started = 1;
		}
		else if (started)
			break;
		s++;
	}
	return (result * sign);
}
