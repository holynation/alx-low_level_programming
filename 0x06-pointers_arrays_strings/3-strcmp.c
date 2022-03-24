#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
        // excluding the null byte from the string
        while (*s1 != '\0' || *s2 != '\0')
        {
		// if element of arr1 in arr2 are diff, return difference
                if (*s1 != *s2)
		{
                        return (*s1 - *s2);
		}
		// increment index
                s1++;
                s2++;
        }
        return (0);
}
