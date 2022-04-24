#include "main.h"
/**
 * _strncat - "Function we'll use to concatenate 2 strings"
 *
 * @n: "value to determine how many characters are to be printed"
 * @dest: "Point to the destination string"
 * @src: "Point to the source string"
 *
 * Return: "Function to concatenate 2 strings without src null termination"
 */
char *_strncat(char *dest, char *src, int n){

	int len = 0;
	int y = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (y < n && src[y] != '\0')
	{
		dest[len] =src[y];
		len++;
		y++;
	}
	dest[len + n + 1] = '\0';
	return (dest);
}
