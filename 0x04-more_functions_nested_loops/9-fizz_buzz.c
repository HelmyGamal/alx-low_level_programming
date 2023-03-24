#include <stdio.h>

/**
 * main - start funcation
 *
 * Return: always return 0 (suceess)
 *
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("fizzBuzz");
		}
		else if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
