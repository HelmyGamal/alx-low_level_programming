#include "main.h"

/**
 * rev_string - prints a reversed string.
 *
 * @s : the string
 *
 * Return nothing
 *
*/

void rev_string(char *s)
{
	int l = 0, i;
	char temp;

	while (s[l])
		l++;
	for (i = 0; i = l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
