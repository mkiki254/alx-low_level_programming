#include "main.h"

/**
 * print_line - Print lines based on n
 * @n: number of lines
 *
 * Return: no return
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
