#include "main.h"

/**
 * _strlen_recursion - that return string length.
 *
 * @s : the string
 *
 * Return: the length of the string
 *
*/

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}
	return (counter);
}
