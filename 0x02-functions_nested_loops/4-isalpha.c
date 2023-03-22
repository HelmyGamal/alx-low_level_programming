#include"main.h"

/**
 * _isalpha -  Description : C programe checks alpha
 *
 * @c : input of the function
 *
 * Return: return 1 if c is alpha
 *
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
