#include "main.h"
int is_prime_number_wrapper(int, int);

/**
 * is_prime_number - finds out whether a number is a prime
 * number
 * @n: the number
 *
 * Return: returns 1 for a prime number and 0 for not a prime
 * number
 */
int is_prime_number(int n)
{
	return (is_prime_number_wrapper(n, n / 2));
}
/**
 * is_prime_number_wrapper - Does the actual checking of prime number
 * @n: the number
 * @i: half the number
 *
 * Return: returns 1 for a prime number and 0 for not a prime
 * number
 */
int is_prime_number_wrapper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number_wrapper(n, i - 1));
}
