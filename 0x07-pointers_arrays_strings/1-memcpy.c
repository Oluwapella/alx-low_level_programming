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
<<<<<<< HEAD
	int r = 0;
	int i = n;
		for (; r < i; r++)
=======
	int i = 0;
	int r = n;
		for (; r < i ; r++)
>>>>>>> f9f6a50f21460f9675dde647265da157fa8e7581
		{	dest[r] = src[r];
		n--;
		}
	return (dest);

}
