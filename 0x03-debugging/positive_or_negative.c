#include "main.h"

/**
 * main - Entry point
 *
 * Description : C programe that prints + or -
 *
 * Return: return always 0 (success)
 *
*/
int posi(void)
{
	int i;
	
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i is negative\n", i);
	return (0);
}
