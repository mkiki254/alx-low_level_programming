#include "main.h"

/**
 * main - Using _putchar to print _putchar
 *
 * Return: 0 success
 */

int main(void)
{
	char str[8] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
