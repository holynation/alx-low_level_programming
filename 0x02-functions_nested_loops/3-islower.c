#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: character to be checked
  * Return: 1 if lowercase, otherwise 0
  */

int _islower(int c)
{
	/* since under the hood,a character is stored as integer*/
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
