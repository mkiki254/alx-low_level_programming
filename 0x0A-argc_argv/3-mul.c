#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program multiplies two numbers
 * @argc: number of arguments
 * @argv: the arguments array
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			product *= atoi(argv[i]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
