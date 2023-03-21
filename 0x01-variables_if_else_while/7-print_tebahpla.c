#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : C programe that prints reverse lower case alpha
 *
 * Return: return always 0 (success)
 *
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
