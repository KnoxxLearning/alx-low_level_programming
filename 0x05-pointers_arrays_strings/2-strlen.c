#include "main.h"
#include <string.h>
/**
 * _strlen - function used to check the length of a string
 * @s: parameter of char type
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
