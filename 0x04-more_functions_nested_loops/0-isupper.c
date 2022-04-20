#include "main.h"
/**
 * _isupper - "Program to check for uppercase characters"
 * @c: The character we'll be checking
 *
 * Return: "1 if character is uppercase, 0 otherwise"
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
