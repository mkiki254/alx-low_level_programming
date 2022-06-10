#include "main.h"

/**
 * _isupper - Checks whether an alphabet is in upper case
 * @c: the alphabet
 *
 * Return: 1 means is upper 0 means is not upper
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
