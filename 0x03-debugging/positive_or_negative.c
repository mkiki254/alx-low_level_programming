#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  positive_or_negative - Determine if a number is positive, negative or zero.
 *  @i: number passed
 *
 * Return: Always 0 (success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
