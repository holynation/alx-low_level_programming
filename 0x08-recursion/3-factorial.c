#include "main.h"

/**
 * factorial - find factorial of n
 * @n: number
 *
 * Return: factorial of number, -1 if less than 0 to show error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
