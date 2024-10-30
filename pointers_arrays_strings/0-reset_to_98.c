#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Updates the value of the integer it points to to 98.
 * @n: Pointer to an int that will be updated.
 *
 * Description: This functions takes a pointer to an int and modifies
 * the value it points to, setting it to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
