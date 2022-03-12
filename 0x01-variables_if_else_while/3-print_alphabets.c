#include <stdio.h>

/**
  *main - Entry point
  *Description: A program that print alphabet in
  *lowercase, and then in uppercase, followed by
  *a new line.
  *Return: Always return 0
  */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		putchar(toupper(alpha));
		alpha++;
	}
	putchar('\n');
	return (0);
}
