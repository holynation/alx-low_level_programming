#include "main.h"
#define NULL 0

/**
 * _strchr - locate first occurrence of char in string
 * and returns pointer at that point
 * @s: string to search
 * @c: target characer
 *
 * Return: pointer of that character in the string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)/* find match */
	{
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
