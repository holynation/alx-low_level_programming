#include <stdio.h>
#include "main.h"

/**
 * main - print each argument passed to program on a line
 * @argc: argument counter
 * @argv: pointer to string array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
