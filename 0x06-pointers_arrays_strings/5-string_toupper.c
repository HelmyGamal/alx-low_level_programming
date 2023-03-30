#include "main.h"

/**
 * string_toupper - prints an uppercase string.
 *
 * @str : the string
 *
 * Return: uppercase string
 *
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
