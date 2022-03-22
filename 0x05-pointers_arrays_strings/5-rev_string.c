#include "main.h"

/**
 * rev_string - the reverse of a string
 * @s: string
 */

void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;
	
	begin  = s;
	end    = s;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (c = 0; c < length - 1; c++)
		end++;
	
	for (c = 0; c < length/2; c++)
	{        
		temp   = *end;
		*end   = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
