#include "main.h"

/**
 * _islower - Check if alphabet is lowercase
 * @c: the alphabet to be checked
 *
 * Return: 1 means success 0 means no success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
