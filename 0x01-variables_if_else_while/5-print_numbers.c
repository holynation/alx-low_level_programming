#include <stdio.h>

/**
  *main - Entry point
  *Description: Print all single digit num of base 10
  *Return: Always return 0
  */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	putchar('\n');
	return (0);
}
