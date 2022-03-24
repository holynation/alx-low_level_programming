#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')/* excluding the null byte from the string*/
	{
		if (*s1 != *s2)/* if element of arr1 in arr2 are diff, return difference */
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
