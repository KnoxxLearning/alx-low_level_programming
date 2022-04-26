#include "main.h"

/**
 * print_line - "Function that draws a straight line in the terminal"
 * @n - "Number of times the character should be printed"
 *
 * Return: "Print '\n' if n is 0 or less"
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		int i;
			for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
 
