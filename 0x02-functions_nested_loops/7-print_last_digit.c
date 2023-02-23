#include "main.h"

/**
*print_last_digit - printing the last digit of a number
*@n: takes users input
*Return: Returns the value of the last digit
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	lastdigit = -1 * (n % 10);
	else
	lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
