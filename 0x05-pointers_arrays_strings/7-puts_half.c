#include "main.h"
/**
 * puts_half - "Function that prints only half of a string"
 *
 * @str: "Pointer to the string to be printed in half"
 */
void puts_half(char *str)
{
	int len = 0;
	int h;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		h = (len - 1) / 2;
		h = h + 1;
	}
	else
	{
		h = len / 2;
	}
	while (h < len)
	{
	_putchar(str[h]);
	h++;
	}
	_putchar('\n');
}

