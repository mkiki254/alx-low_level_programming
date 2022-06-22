#include "main.h"
#include <stdio.h>

int _sqrt_recursion_wrapper(int n, int guess);

/**
 * _sqrt_recursion - returns the squareroot of a natural number
 * @n: the number;
 *
 * Return: returns the squareroot
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_wrapper(n, 1));
}

/**
 * _sqrt_recursion_wrapper - performs the actual recursion of squareroot
 * @n: the number
 * @guess: the squareroot
 *
 * Return: returns the squareroot
 */
int _sqrt_recursion_wrapper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess > n / 2)
		return (-1);
	guess++;
	return (_sqrt_recursion_wrapper(n, guess));
}
