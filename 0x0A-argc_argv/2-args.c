#include <stdio.h>

/**
 * main - prints the arguments passed
 * @argc: the number of arguments
 * @argv: the array of the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
