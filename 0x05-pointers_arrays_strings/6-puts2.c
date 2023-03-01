#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 *@str: the string
 * Return: starting with the first character, followed by a new line
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] !=  '\0'; i++)
	{
		if ((i % 2) == 0)
		_putchar(str[1]);
		else
			continue;
	}
	_putchar('\n');
}
