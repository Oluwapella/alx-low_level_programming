#include "main.h"

/**
 * _strlen_recursion - a function that prints a string, followed by a new line.
 *@s: a string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion s++);
	}
	return (0);
}
