#include"main.h"

/**
 * _abs -  Description : C programe return abs values
 *
 * @n : input of the function
 *
 * Return: return abs values
 *
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else if (n == 0)
		return (0);
	else
		return (n);
}
