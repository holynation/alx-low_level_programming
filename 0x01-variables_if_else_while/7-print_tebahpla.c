#include <stdio.h>

/**
  *main - Entry point
  *Description: Print alphabet a-z in reverse order
  *Return: Always return 0
  */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
