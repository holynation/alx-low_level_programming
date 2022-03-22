#include "main.h"

/**
  * _strlen - it returns the length of a string
  * @s: string
  * Return: length of the string
  */

int _strlen(char *s)
{
	int counter = 0;
	/* since a string will always end with '\0' */
	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
