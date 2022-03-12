#include <stdio.h>

/**
  *main - Entry point
  *Description: This program print the alphabet in
  *in lowercase
  *Return: Always return 0
  */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
