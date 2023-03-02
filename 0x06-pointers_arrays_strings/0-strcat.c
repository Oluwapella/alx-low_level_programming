#include "main.h"

/**
 * _strcat -  function appends the src string to the dest string, overwriting
 * terminating null byte (\0) at the end of dest
 *@dest: the string
 *@src: the string
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int k;

	t = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[t] = src[k];
		t++;
		k++;
	}

	dest[t] = '\0';
	return (dest);
}
