#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r, k;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (r = 0; accept[r]; r++)
		{
			if (s[k] == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
	}
	return (n);
}
