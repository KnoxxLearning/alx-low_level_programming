/**
* _isalpha 
checks for alphabetic character
*  @c: character we'll be checking
*
*  Return: 1 if c is the letter, uppercase or lowercase, 0 if c is other
*/
#include "main.h"
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || ( c>= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
