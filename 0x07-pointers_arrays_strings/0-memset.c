#include "main.h"

/**
 * _memset - "Function that fills memory with a constant byte"
 * @n - "The number of bytes to be filled"
 * @s - "Pointer to memory area"
 * @b - "constant value we'll fill n with"
 *
 *Return - "Pointer to the memory area 's'"
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
