#include <stdio.h>

/**
 *main - Entry point
 *Description: Print all combinations of three different digits
 *Return: Always return 0
 */

int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++) /*hundredth place*/
	{
		for (ten = (hundred + 1); ten <= '9'; ten++) /*tenth=100s+1*/
		{
			for (one = (ten + 1); one <= '9'; one++) /*ones*/
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);
				if (hundred != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
