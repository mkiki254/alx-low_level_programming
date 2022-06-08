#include "main.h"

/**
 * print_alphabet_x10 - function for printing lowercase
 * alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j;

		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i = i + 1;
	}
}
