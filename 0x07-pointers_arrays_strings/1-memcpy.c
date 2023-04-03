#include "main.h"

/**
 * *_memcpy - function that copy two strings..
 *
 * @dest : first string.
 * @src :second string
 * @n: n bytes from src
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
