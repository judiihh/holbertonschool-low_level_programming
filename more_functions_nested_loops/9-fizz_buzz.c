#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 with FizzBuzz rules
 *
 * Description: For multiples of three, prints "Fizz" instead of the number,
 * for multiples of five, prints "Buzz". For numbers which are multiples
 * of both three and five, prints "FizzBuzz". Each number or word is
 * separated by a space.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
