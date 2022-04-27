#include "main.h"

/**
 * _strncopy - "Function that copies a string"
 *
 * @dest: "Pointer for the destination string"
 * @src: "Pointer to the source string"
 *
 * Return: "The string we copied into 'dest'"
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;
	while (src[a] != '\0')
	{
		a++;
	}
	
	while (b < n && src[b])
	{
		dest[b] = src[b];
		y++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
