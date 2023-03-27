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
	int i = 0;

	while (str[i])
		i++;
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
