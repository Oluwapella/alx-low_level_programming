#include <stdio.h>
#include <string.h>

/**
 *_strlen - a function that returns the length of a string
 *@s: indicate the character
 * Return: numbers of character
 */

int _strlen(char *s)
{
	int a = 0; /* start count from 0*/

	for (; *s++;)
	a++;
	return (a);
}
