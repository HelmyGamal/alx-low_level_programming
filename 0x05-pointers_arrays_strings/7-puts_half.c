#include "main.h"

/**
 * puts_half - prints a reversed string.
 *
 * @str : the string
 *
 * Return nothing
 *
*/

void puts_half(char *str)
{
	int l = 0, i;

	while (str[l])
		l++;
	for (i = l / 2; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
