#include "main.h"

/**
 * *_strcat - function that concatenates two strings..
 *
 * @dest : first string.
 * @src :second string
 *
 * Return: nothing
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, k;

	while (dest[i])
		i++;
	for (k = 0; src[k]; k++)
		dest[i++] = src[k];
	return (dest);
}
