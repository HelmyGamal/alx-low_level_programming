#include "main.h"

/**
 * swap_int - that swaps the values of two integers.
 *
 * @a : first parameter
 * @b : second parameter
 *
 * Return nothing
 *
*/

void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
