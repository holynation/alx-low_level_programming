#include "main.h"

/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *s)
{
	while (*s)/* excluding null terminator*/
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 'a' + 'A';
		}
		s++;
	}
}
