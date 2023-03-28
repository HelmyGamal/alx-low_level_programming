#include "main.h"

/**
 * print_array - prints an array, followed by a new line.
 *
 * @a : the array
 * @n :num of array elements
 *
 * Return nothing
 *
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
