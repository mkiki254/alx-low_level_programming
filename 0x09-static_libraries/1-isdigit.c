#include "main.h"

/**
 * _isdigit - checks whether c is a number
 * @c: number being passed
 *
 * Return: 1 means success 0 means not sucess
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
