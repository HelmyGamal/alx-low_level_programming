#include "main.h"

/**
 * _print_rev_recursion - prints a rev array, followed by a new line.
 *
 * @s : the array
 *
 * Return nothing
 *
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
