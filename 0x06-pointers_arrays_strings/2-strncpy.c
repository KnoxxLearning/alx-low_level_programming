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
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
			dest[l] = src[l];

	for (l = 0 ; l < n; l++)
			dest[l] = '\0';

	return (dest);
}
