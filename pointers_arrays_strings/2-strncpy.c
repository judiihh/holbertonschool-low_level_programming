#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy from src.
 *
 * Description: Copies up to n characters from the string pointed to by src
 * to dest. If src is less than n characters long, the remainder of dest
 * will be padded with null bytes.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
