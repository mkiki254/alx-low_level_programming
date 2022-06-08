#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: the number being passed
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int rm;

	rm = n % 10;
	if (rm < 0)
	{
		_putchar(-rm + 48);
		return (-rm);
	}
	else
	{
		_putchar(rm + 48);
		return (rm);
	}

}
