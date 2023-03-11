#include <stdio.h>

/**
 *_strpbrk - a function that searches a string for any of a set of bytes
 * @s:the string
 * @accept: the input
 * Return:pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
	s++;
	}
	return ('\0');
}
