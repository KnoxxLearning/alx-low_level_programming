#include "main.h"
/**
 * print_diagonal - "Function that draws a diagonal on the terminal"
 * @n: "Number of times the character should be printed"
 *
 * Return: "Only print a new line if n is 0 or less"
 */
void print_diagonal(int n)
{
	int len;
	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar(' ');
		}
	}
}
