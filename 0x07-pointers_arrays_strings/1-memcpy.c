#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @n - Number of bytes to be copied
 * @src - Pointer to the source memory area
 * @dest - Pointer to the destination memory area
 *
 * Return: "Pointer to dest"
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
