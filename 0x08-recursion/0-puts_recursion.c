#include "main.h"

/**
 *_puts_recursion - a function that prints a string, followed by a new line.
 *@s: a string
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{		_putchar(*s);
	 _puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
