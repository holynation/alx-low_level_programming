#include <stdio.h>

/**
 *main -Entry point
 *Description: Print 00 to 99 with no duplicate digits
 *or combos:there's no 11,no 10 rather use (01) the lowest
 *Return: Always return 0
 */

int main(void)
{
	int units;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
	{
		for (units = (tens + 1); units <= '9'; units++) /*one's ten+1*/
		{
			putchar(tens);
			putchar(units);

			if (tens != '8' || units != '9') /*print the commas and space*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
