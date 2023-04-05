#include "main.h"

/**
 * _puts_recursion - prints an array, followed by a new line.
 *
 * @s : the array
 *
 * Return nothing
 *
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
