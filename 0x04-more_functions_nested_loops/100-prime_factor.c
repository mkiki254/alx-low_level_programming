#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0 means success
 */
int main(void)
{
	int i;
	long int num, large = 0;

	num = 612852475153;

	for (i = 2; num != 1; ++i)
	{
		while (num % i == 0)
		{
			num = num / i;
			large = i;
		}
	}
	printf("%ld\n", large);
	return (0);
}
