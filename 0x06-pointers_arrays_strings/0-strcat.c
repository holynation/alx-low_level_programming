#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	/* to count the str len without the null byte*/
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		/* appending src to the last index of dest */
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
