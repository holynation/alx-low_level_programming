#include "main.h"

/**
 * _strlen - the reverse of a string
 * @s: string
 */

void rev_string(char *s)
{
	char *tmp;
	int start, end, count = 0;
	/*calculating the string length*/

	while (*s != '\0')
	{
		count++;
	}
	/* get the last character, recall '\0' as the last character*/
	end = count - 1;

	for (start = 0; start < count; start++)
	{
		tmp[start] = s[end];
		end--;
	}
	tmp[start] = '\0';
	*s = tmp;
}
