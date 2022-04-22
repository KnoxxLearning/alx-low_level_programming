#include "main.h"
/**
 * _puts - function that prints a string
 * @str: the string to be printed
 *
 * Return: None
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
