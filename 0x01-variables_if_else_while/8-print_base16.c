#include <stdio.h>

/**
 *main - Entry point
 *Description: Prints hexadecimal base 0123456789abcdef,
 *using putchar.Since hexadecimal is
 *0-9 A-F i.e A = 10, B = 11 and so on.
 *Return: Always return 0
 */

int main(void)
{
	int n = '0';
	int a_to_f = 'a';

	while (n <= '9') /*this print 0-9*/
	{
		putchar(n);
		n++;
	}

	while (a_to_f <= 'f') /*this print a-f to end hexbase*/
	{
		putchar(a_to_f);
		a_to_f++;
	}

	putchar('\n');

	return (0);
}
