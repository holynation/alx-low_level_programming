#include "main.h"

/**
 * _puts_recursion - print string followed by new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')/* here is the base case*/
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
