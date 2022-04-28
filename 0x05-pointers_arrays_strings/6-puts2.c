#include "main.h"

/**
 * puts2 - "function used to print every other character of a string"
 *
 * @str: "the string to be created"
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}

	i++;
}
_putchar('\n');
}
