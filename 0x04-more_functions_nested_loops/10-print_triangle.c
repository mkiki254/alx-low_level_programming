#include "main.h"

/**
 * print_triangle - Prints a triangle given size
 * @size: the size of triangle
 *
 * Return: no return
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			if (i < size)
			{
				k = size - i;
				while (k > 0)
				{
					_putchar(' ');
					k--;
				}
			}
			for (j = 1; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
