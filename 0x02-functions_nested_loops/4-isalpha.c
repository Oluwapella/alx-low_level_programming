#include "main.h"

/**
*_isalpha - this a function that checks for alphabetic character
*@c:character that print letter of augement
*Return: return (1) if its true return (0) if its false
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c >= 'Z'))
return (1);
else
return (0);
}
