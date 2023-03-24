#include"main.h"

/**
 * print_square -  Description : C programe checks nums
 *
 * @size : input of the function
 *
*/

void print_square(int size)
{
	int num, h;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (num = 1; num <= size; num++)
		{
			for (h = 1; h <= size; h++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
