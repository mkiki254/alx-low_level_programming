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
	int num1, num2, prod;

	if (argc > 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
