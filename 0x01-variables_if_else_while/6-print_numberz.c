#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : C programe that prints all single digit numbers of base 10
 *
 * Return: return always 0 (success)
 *
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
