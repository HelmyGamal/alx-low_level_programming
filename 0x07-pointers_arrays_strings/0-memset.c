#include "main.h"

/**
 * *_memset - function that copy two strings..
 *
 * @s : first string.
 * @b :second string
 * @n: n bytes from src
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
