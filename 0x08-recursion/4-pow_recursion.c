#include "main.h"

/**
 * _pow_recursion - that return power.
 *
 * @x : the base number
 * @y : the power
 *
 * Return: the power
 *
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
