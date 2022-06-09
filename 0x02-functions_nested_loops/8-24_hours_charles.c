#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day
 */

void jack_bauer(void)
{
	char str[3] = "012";
	int h;

	for (h = 0; h < 3; h++)
	{
		char str1[24] = "012345678901234567890123";
		int i;

		for (i = 0; i < 24; i++)
		{
			char str2[6] = "012345";
			int j;

			for (j = 0; j < 6; j++)
			{
				char str3[10] = "0123456789";
				int k;

				for (k = 0; k < 10; k++)
				{
					_putchar(str[h]);
					_putchar(str1[i]);
					_putchar(':');
					_putchar(str2[j]);
					_putchar(str3[k]);
					_putchar('\n');
				}
			}
		}
	}
}
