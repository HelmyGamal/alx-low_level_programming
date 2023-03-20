#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : C programe that prints the size of
 * different variables using sizeof function
 *
 * Return: return always 0 (success)
*/

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
