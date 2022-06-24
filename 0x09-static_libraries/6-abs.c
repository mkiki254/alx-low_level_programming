#include "main.h"

/**
 * _abs - returns absolute value of integer
 * @n: The number being passed
 *
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
