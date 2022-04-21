#include "main.h"
/**
 * puts2 - fx to print 1 char out of 2 of a string
 * @str: the string to be printed
 *
 * Return: None
 */
void put2(char *str)
{
	int len;
	char z;
	for (len = 0; *(str + len) !=0; len++)
	{
		if (len % 2 == 0)
		{
			z = *(str + len);
			_putchar(1);
		}
	}
	_putchar('\n');
}
