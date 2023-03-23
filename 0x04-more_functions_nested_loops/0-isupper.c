#include"main.h"

/**
 * _isupper -  Description : C programe check lowercase alpha
 *
 * @c : input of the function
 *
 * Return: return 1 if c is lowercase
 *
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
