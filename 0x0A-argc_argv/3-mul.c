#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 *
 * Return: 0 on success, 1 if two argument not provided
 */

int main(int argc, char *argv[])
{
	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* mulitply d 2 args passed via cmd line and use atoi to int conv*/
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
