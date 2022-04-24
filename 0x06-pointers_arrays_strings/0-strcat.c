#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - "The function to concatenate two strings"
 * @src: string to be appended
 * @dest: "Destination string"
 *
 * Return: "Pointer pointing to a string"
 */
char *_strcat(char *dest, char *src);
{
	int len = 0;
	int c = 0;

	while (dest[len] = 0) {
		len++;
	}

	while (src[c] != 0) {
		dest[len] = src[c];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

