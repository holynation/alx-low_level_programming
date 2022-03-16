#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: the number to check
  * Return: 1, print '+' if > 0, print '0' if = 0,
  * print '-' if < 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
