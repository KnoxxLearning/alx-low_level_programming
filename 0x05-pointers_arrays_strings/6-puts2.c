#include "main.h"
/**
 * puts2 - "function usede to print every other character of a string"
 *
 * @str: "the string to be created"
 */
void puts2(char *str)
{
	int x;
	int len = 0;

	while (str[len] != '\n')
	{
		len++;
	}
	for (x = 0; x < len; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
