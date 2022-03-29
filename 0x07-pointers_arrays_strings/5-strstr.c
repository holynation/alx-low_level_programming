#include "main.h"
#define NULL 0

/**
 * _strstr - locate the first occurrence of the
 * substring needle in the string haystac
 * @haystack: string to search
 * @needle: target substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, y, x;

	if (needle[0] == '\0')/* check if the needle exist,esle return haystack*/
		return (haystack);

	while (haystack[i] != '\0') /* loop through haystack */
	{
		/* if a byte matches first char of a needle */
		/* loop through needle until match ends */
		if (haystack[i] == needle[0])
		{
			x = i, y = 0;
			while (needle[y] != '\0')
			{
				if (haystack[x] == needle[y])
					x++, y++;
				else
					break;
			} /* if matched throughout, return haystack */

			if (needle[y] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL); /* if no match at all*/
}
