#include"main.h"

/**
 * print_alphabet -  Description : C programe that prints
 *			reverse lower case alpha
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
