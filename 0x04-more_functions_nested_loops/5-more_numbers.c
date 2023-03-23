#include"main.h"

/**
 * more_numbers -  Description : prints0:14 10 times
 *
*/

void more_numbers(void)
{
	int i, l, num;

	for (i = 1; i <= 10; i++)
	{
		for (l = 0; l <= 14; l++)
		{
			num = l;
			if (l > 9)
			{
				_putchar(1 + 48);
				num = l % 10;
			}
		_putchar(num + 48);
		}
		_putchar('\n');
	}
}
