#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0 means success
 */
int main(void)
{
	long int i, num;

	num = 612852475153;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
