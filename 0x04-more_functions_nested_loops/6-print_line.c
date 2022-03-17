#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: num of times the character will be drawn
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
