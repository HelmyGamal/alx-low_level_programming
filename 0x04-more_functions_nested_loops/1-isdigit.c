#include"main.h"

/**
 * _isdigit -  Description : C programe check lowercase alpha
 *
 * @c : input of the function
 *
 * Return: return 1 if c is lowercase
 *
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
