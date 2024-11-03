#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to reverse.
 * @n: The number of elements in the array.
 *
 * Description: Reverses the elements in the array by swapping the first
 * element with the last, the second with the second to last, and so on.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
