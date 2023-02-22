#include "main.h"

/**
 *_islower - this a function that print lowercase letter
 *@c: this is the variable char
 *Return: return (1) if its true while false (0)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

