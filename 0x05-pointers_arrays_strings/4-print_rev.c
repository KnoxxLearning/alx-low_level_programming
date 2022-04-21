#include "main.h"
/**
 * print_rev - function used to print string in reverse
 * @s: the string we'll reverse
 *
 * Return: None
 */
void print_rev(char *s)
{
	int r;
	
	r = 0;
	while (*(s + r) != '\n')
		r++;
	r--o;

	for (; r >= 0; r--)
		_putchar(*(s + r));
	_putchar('\n');
}
