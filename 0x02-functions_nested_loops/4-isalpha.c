#include "main.h"
/**
* _isalpha - "checks for alphabetic character"
*  @c: "The character we'll be checking"
*
*  Return: "1 if c is the letter, uppercase or lowercase, 0 if c is other"
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
