#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: the destination memory area to copy to.
 * @src: the source memory area to copy from.
 * @n: the number of bytes to copy.
 *
 * Return: a pointer to the destination memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
