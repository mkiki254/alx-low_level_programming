#include "main.h"
/**
 * print_sign - Shows the sign of the value of n
 * @n: the value of n passed
 *
 * Return: 1 means greater than 0, 0 means equal to 0, -1 means less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
