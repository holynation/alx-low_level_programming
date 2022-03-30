#include "main.h"

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{	
	root = 0;
	if (n < 0)
		return (-1);

	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return _sqrt_recursion(n, root + 1);
}
