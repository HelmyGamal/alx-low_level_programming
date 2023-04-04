#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - Entry point
 * @a: array
 * @size: array size
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i];
		s2 = s2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, %d\n", s1, s2);
}
