#include "main.h"

/**
 * print_rev - fx to print string in reverse
 * @s: the string to print in reverse
 *
 * Return: None
 */
{
	int e;

	e = 0;
	while (*(s + e) != '\0')
		e++;
	e--;
	for (; e >= 0; e--)
		_putchar(*(s + e));
	_putchar('\n');
}
