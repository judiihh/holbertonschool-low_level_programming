#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function takes a string and reverses its characters
 * in place by swapping the characters from the start and end
 * until they meet in the middle.
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char tmp = s[start];

		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
