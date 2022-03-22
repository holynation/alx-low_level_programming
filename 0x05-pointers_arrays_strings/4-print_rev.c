#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{

	int len = 0;
	int i;

	/* iterate to find length of string and point to last character */
	while (*s != '\0')
	{
		len++;
		++s;
	}

	/* go back to character before null character */
	s--;
	i = len;

	/* print string reversed */
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}

	_putchar('\n');
}
