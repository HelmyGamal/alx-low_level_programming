#include "main.h"

/**
 * _strcmp - function that compare two strings..
 *
 * @s1 : first string.
 * @s2 :second string
 *
 * Return: dest
*/

int _strcmp(char *s1, char *s2)
{
	int ref = 0, k;

	for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
		{
			ref = ((int)s1[k] - 48) - ((int)s2[k] - 48);
			break;
		}
	}
	return (ref);
}
