#include "main.h"

/**
  * _isalpha - checks for alphabetic character
  * @c: character to check
  * Return: 1 if lower or uppercase
  */

int _isalpha(int c)
{
	/* since character are stored as integer under the hood */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
