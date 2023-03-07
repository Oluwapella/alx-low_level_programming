#include "main.h"

/**
 *_memset - Write a function that fills memory with a constant byte
 *@s:n byte area pointed to by s
 *@b:constant B
 *@n: bytes of the memory
 *Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
