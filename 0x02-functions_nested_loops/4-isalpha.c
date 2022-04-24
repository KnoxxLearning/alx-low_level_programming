#include "main.h"

/**
 * _isalpha - "Function that checks for lowercase character"
 *
 * @c: "The character to check"
 * Return: "1 if the character is a lowercase or upper case letter, 0 otherwise"
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}	
}
