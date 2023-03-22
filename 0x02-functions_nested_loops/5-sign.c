#include"main.h"

/**
 * print_sign -  Description : C programe checks nums
 *
 * @n : input of the function
 *
 * Return: return 1 if n is positive
 *
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
