#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *@s:the string
 *@c: the character
*Return:a pointer to the first occurrence of the character c in the string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (&s[i]);
	}
	return (0);

}
