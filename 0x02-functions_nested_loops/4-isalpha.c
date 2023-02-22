#include "main.h"

/**
*_isalpha - this a function that checks for alphabetic character
*@c:character that print letter of augement
*Return: return (1) if its true return (0) if its false
*/
int _isalpha(int c)
{
int a = 'a';
int Z = 'Z';

if (c >= a)
return (1);
else if (c <= Z)
return (1);
else
return (0);
}
