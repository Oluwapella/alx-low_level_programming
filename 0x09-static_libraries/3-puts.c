#include "main.h"
#include <string.h>

/**
 *_puts - a function that prints a string, followed by a new line
 *@str: pointer
 * Return: to stdout
 */

void _puts(char *str)
{
	int a = 0; /* it start count from 0*/

	while (str[a] != '\0')
	{
	_putchar(str[a]);
	a++;
	}
	_putchar('\n');
}
