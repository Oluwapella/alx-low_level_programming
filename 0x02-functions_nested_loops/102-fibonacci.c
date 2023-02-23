#include"main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 * Starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; ++count)
	{
	sum = fib1 + fib2;
	printf("%lu", sum);

	fib1 = fib2;
	fib2 = sum;

	if (count == 49)
	printf("\n");
	else
	printf(", ");
	}

	return (0);
}
