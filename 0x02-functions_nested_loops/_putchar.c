#include "main.h"
#include <unistd.h>
/**
 * putchar - write to change the character of c to stdout
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
