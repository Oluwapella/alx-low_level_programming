#include "main.h"

/**
 *_memcpy -  function copies n bytes from memory area src to memory area dest
 *@src: memmory area
 *@dest: Returns a pointer to dest
 *@n: byte that will be copies
 *Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int i = 0;
	int r = n;
		for (; r < i ; r++)
		{	dest[r] = src[r];
		n--;
		}
	return (dest);

}
