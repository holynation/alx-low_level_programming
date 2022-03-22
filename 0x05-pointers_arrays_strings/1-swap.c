#include "main.h"

/**
  * swat_int - swaps the values of two integers.
  * @a: integer to swap
  * @b: integer to swap
  */

int swap_int(int *a, int *b)
{
	int tmp; /* to temp hold the value of a single int*/

	tmp = *a;
	*a = *b;
	*b = tmp;
}
