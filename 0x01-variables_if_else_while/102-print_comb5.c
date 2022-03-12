#include <stdio.h>

/**
  *main - Entry point
  *Description: Print all possible combos of two-digit numbers
  *from 00-99 e.g. 00 01, 00 02, 00 03, 00 04 but no repeats
  *Return: Always return 0
  */

int main(void)
{
	int tens;
	int ones;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++) /*printing the first two digit pair*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
		 	for (t = tens; t <= '9'; t++) /*printing the second pair*/
			{
				for (o = ones + 1; o <= '9'; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((tens == '9' && ones == '8') &&
					      (t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				O = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
