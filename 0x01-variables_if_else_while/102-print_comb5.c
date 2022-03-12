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
	int unit;
	int t;
	int u;

	for (tens = '0'; tens <= '9'; tens++) /* printing the first pair */
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			for (t = tens; t <= '9'; t++)/* printing the second pair */
			{
				for (u = unit + 1; u <= '9'; u++)
				{
					putchar(tens);
					putchar(unit);
					putchar(' ');
					putchar(t);
					putchar(u);

					if (!((tens == '9' && unit == '8') && (t == '9' && u == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				u = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
