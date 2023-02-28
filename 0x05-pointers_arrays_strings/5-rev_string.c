#include "main.h"

/**
 * rev_string - a function that reverses a string
 *@s: the string
 * Return: its return reverses string
 */

void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')

		c++
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
