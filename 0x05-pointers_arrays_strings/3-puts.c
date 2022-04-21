#include "main.h"
/**
 * _puts - function that prints a string
 * @str: the string to be printed
 *
 * Return: None
 */
void _puts(char *str)
{
	int s;

	for (s = 0; *(str + s) != 0; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
