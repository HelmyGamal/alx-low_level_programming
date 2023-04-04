#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int r, k;
	char *p;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (r = 0; accept[r]; r++)
		{
			if (s[k] == accept[r])
			{
				p = &s[k];
				return (p);
			}
		}
	}
	return ('\0');
}
