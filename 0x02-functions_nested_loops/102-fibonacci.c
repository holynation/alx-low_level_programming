#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int countTotal = 50;
	long a = 1;
	long b = 2;
	long result;

	for (counter = 1; counter <= (countTotal / 2); counter++)
	{
		printf("%li, %li, ", a, b);
		a += b;
		b += a;
	}
	if (countTotal % 2 == 1)
	{
		if (result != '\0')
		{
			result .= ",";
		}
		result .= " " + a;
	}
	printf(result);
	printf("\n");

	return (0);
}
