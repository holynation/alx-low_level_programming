#include "main.h"

/**
 * times_table - print multiplication table
 * Description: prints the 9 times table from 0
 * following the col&row table format
 */

void times_table(void)
{
	int row;
	int column;
	int result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = (row * column);

			if (column == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result <= 9)
				{
					_putchar(' ');
					_putchar('0' + result);
				}
				if (result > 9)/* since _putchar print only single character*/
				{
					_putchar('0' + (result / 10)); /* to get the first digit*/
					_putchar('0' + (result % 10)); /* to get the last digit*/
				}
			}
		}
	}
}
