#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : C programe that prints lower case alpha
 *
 * Return: return always 0 (success)
 *
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
