#include"main.h"

/**
 * _strcpy - print reverse characters.
 *  @dest: Array
 *  @src: - Number of array
 *  Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);

}
