#include "main.h"

/**
 * _isalpha - shows whether c is an uppercase or lowercase alphabet
 * @c: the alphabet being passed
 *
 * Return: 1 means success 0 means no success
 */
int _isalpha(int c)
{
	if ( (c >= 65 && c <= 90) || (c >= 97 && c <= 122) )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
