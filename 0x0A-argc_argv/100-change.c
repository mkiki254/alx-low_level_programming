#include <stdio.h>
#include <stdlib.h>

/**
 * main - Shows the numbers of coins to be returned
 * @argc: number of arguments
 * @argv: argument array;
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc > 1 && argc < 3)
	{
		int mon, change = 0;

		mon = atoi(argv[1]);
		if (mon < 0)
			printf("%d\n", change);
		while (mon > 0)
		{
			if (mon >= 25)
				mon -= 25;
			else if (mon >= 10)
				mon -= 10;
			else if (mon >= 5)
				mon -= 5;
			else if (mon >= 2)
				mon -= 2;
			else
				mon -= 1;
			change += 1;
		}
		printf("%d\n", change);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
