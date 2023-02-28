#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *@a: interger that will be swap
 *@b: interger that will be swap
 * Return: the swap integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
