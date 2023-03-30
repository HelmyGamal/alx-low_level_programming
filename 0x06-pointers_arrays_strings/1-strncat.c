#include "main.h"

/**
 * *_strncat - function that concatenates two strings..
 *
 * @dest : first string.
 * @src :second string
 * @n: n bytes from src
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k;

	while (dest[i])
		i++;
	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[i++] = src[k];
	return (dest);
}
