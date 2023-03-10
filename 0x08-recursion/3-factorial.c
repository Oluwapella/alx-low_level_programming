#include "main.h"

/**
 * factorial - a function that prints a string, followed by a new line.
 *@n: number to be  factoriaize
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
