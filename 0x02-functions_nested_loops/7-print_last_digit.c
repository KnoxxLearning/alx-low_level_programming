#include "main.h"

/**
* print_last_digit - "Fx that prints the last digit of a number"
* @n: "The focal number"
* Return: "Value of the last digit"
*/
int print_last_digit(int n)
{
	int 1Digit = n % 10;

	if (1Digit < 0)
	{
		1Digit *= -1;
	}
		_putchar(1Digit + '0');
		return (1Digit);
}
