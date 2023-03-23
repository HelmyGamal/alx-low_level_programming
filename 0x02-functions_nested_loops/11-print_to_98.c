#include"main.h"
#include <stdio.h>

/**
 * print_to_98 -  Description : C programe print to 98
 *
 * @n : input of the function
 *
 * Return: print to 98
 *
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
