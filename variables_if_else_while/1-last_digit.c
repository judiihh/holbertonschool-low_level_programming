#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point working with last digit
 * Return: Always 0
 * Using a source code
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lst_dgit;

	lst_dgit = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_dgit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgit);
	return (0);
}
