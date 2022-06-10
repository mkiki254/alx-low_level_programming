#include "main.h"

/**
 * print_most_numbers - Prints numbers except 2 and 4
 *
 * Return: no return
 */
void print_most_numbers(void)
{
	int i;
	char str[8] = "01356789";

	for (i = 0; i <= 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
