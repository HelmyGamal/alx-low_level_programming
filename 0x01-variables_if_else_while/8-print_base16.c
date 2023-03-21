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
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
