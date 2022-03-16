#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: integer
  *
  * Description: the function to compute the absolute number
  * of the given integer value
  * Return: absolute value
  */

int _abs(int n)
{
	/* since the abs value of any num is always +ve */
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}

	return (0);
}
