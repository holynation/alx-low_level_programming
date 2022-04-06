#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		len1++, i++;

	while (*(s2 + j))
		len2++, j++;
	len2++; /* account for null terminator to the length */

	concat = malloc(sizeof(char) * (len1 + len2)); /*alloc dynamic memory*/

	if (concat == NULL) /* validate memory */
		return (NULL);

	i = 0, j = 0;
	while (i < len1) /* concatenate */
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	while (j < len2)
	{
		*(concat + i) = *(s2 + j); /* start from ending of i*/
		i++, j++;
	}

	return (concat);
}
