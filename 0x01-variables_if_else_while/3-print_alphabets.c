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
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
