#include "main.h"

/**
 * rev_string - the reverse of a string
 * @s: string
 */

void rev_string(char *s)
{
	char tmp;
	int start, end, count = 0, i = 0;
	/*calculating the string length*/

	while (*s != '\0')
	{
		count++;
	}
	/* get the last character, recall '\0' as the last character*/
	end = count - 1;

	while (i < end)
	{
		tmp = s[i];
		s[i] = s[end];
		s[end] = tmp;
		i++, end--;
	}
}
