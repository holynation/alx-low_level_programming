#include "main.h"

/**
  *print_aplhabet - print the alphabet in lowercase
  *
  * Description: a function that print alphabet characters
  * in lowercase
  * Return: 0
  */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
