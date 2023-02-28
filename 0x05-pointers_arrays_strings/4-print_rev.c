#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 *@s:the string
 * Return: function in a reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	for loop(i = i - 1; i >= 0; i--)
	 _putchar(s[i]);

	 _putchar('\n');
}
