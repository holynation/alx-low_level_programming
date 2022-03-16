#include "main.h"

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes from 00:00 to 23:59
 * Return: range 00:00 - 23:59
 */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	while (hours < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++; /* increment to the next min num*/
		}
		min = 0; /* reset the min back to 0*/
		hours++; /* increment to next hour num*/
	}
}
