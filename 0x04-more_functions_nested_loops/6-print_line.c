#include"main.h"

/**
 * print_line -  Description : C programe checks nums
 *
 * @n : input of the function
 *
*/

void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num <= n; num++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
