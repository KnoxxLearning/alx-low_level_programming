#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_last_digit - "Fx that prints the last digit of a number"
* @n: "The focal number"
* Return: "Value of the last digit"
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	last = last * -1;

	_putchar(last + '0');
	
	return (last);
}
