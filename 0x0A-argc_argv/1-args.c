#include <stdio.h>

/**
 * main - returns the number of arguments
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
