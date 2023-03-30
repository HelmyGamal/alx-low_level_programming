#include "main.h"

/**
 * reverse_array - prints a reversed array.
 *
 * @a : the array
 * @n : array size
 *
 * Return nothing
 *
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
