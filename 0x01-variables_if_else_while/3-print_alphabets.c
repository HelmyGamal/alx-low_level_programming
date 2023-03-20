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
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
