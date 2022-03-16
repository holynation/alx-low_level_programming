#include "main.h"

/**
  * print_last_digit - print the last digit of a number
  * @n: the integer to get it last digit
  * Return: last digit of the number
  */

int print_last_digit(int n)
{
	/* since an integer modulo division by 10 gives it last digit*/
	if (n < 0)
	{
		n *= -1;
	}

	_putchar('0' + (n % 10));

	return (n % 10);
}
