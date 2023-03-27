#include "main.h"

/**
 * print_rev - prints a string, followed by a new line.
 *
 * @s : the string
 *
 * Return nothing
 *
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i] + 0);
	_putchar('\n');
}
