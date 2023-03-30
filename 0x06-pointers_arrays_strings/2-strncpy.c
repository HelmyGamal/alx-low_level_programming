#include "main.h"

/**
 * *_strncpy - function that copy two strings..
 *
 * @dest : first string.
 * @src :second string
 * @n: n bytes from src
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k] = '\n';
		k++;
	}
	return (dest);
}
