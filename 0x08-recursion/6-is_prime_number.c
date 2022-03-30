#include "main.h"

/**
 * isPrime - recursively divide by higher divisor
 * @n: number to check if prime
 * @divisor: divisor
 *
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int isPrime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)/*skip even numbers*/
		return (0);
	return (isPrime(n, divisor + 1));

}

/**
 * is_prime_number - check if prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (isPrime(n, divisor));
}
