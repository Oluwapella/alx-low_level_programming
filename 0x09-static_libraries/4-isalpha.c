#include"main.h"

/**
 * _isalpha - checks if character is a letter both lowercase
 * or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
