#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the program adds two numbers
 * @argc: number of arguments
 * @argv: the arguments array
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char c;

	if (argc > 1)
	{
		for (i = 1; i < argc && *argv[i] != '\0'; i++)
		{
			c = *argv[i];
			if (!(isdigit(c)))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}