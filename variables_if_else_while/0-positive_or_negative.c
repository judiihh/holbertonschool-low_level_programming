#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point working with variable if, else
 * Return: Always 0
 * Using a source code
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("The number is positive.\n");
	else if (n == 0)
		printf("The number is zero.\n");
	else
		printf("The number is negative.\n");
	return (0);
}
