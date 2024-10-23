#include "main.h"
#include <stdio.h>
/**
 * main - Entry point working with main.h and putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
