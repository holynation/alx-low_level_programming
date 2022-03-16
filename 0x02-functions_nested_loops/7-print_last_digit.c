#include "main.h"

/**
  * print_last_digit - print the last digit of a number
  * @n: the integer to get it last digit
  * Return: last digit of the number
  */

int print_last_digit(int n)
{
	/* since an integer modulo division by 10 gives it last digit*/
	long i = n;

	if (i < 0)
	{
		i *= -1;
	}
	i = i % 10;
	_putchar('0' + i);

	return (i);
}
