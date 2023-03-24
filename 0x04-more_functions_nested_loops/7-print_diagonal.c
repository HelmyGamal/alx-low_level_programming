#include"main.h"

/**
 * print_diagonal -  Description : C programe print digonali
 *
 * @n : input of the function
 *
*/

void print_diagonal(int n)
{
	int num, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (num = 1; num <= n; num++)
		{
			for (k = 1; k <= num; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
