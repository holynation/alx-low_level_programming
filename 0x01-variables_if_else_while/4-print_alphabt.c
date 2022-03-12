#include <stdio.h>

/**
  *main - Entry point
  *Description: Print a-z except q and e
  *Return: Always return 0
  */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if ((lower != 'q') && (lower != 'e'))
		{
			putchar(lower);
		}
		lower++;
	}

	putchar('\n');
	return (0);
}
