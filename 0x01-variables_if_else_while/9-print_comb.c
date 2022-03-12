#include <stdio.h>

/**
 *main - Entry point
 *Description: Print 0-9 separated with commas
 *and a space, using putchar four times max only
 *Return: Always return 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
