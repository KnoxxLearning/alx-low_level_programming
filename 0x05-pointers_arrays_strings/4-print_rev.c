#include "main.h"

/**
 * print_rev - "function used to print string in reverse"
 * @s: "the string we'll reverse"
 *
 *
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
