#include "main.h"

/**
* print_last_digit - Fx that prints the last digit of a number
* @z: The focal number
*/
int print_last_digit(int z)
{
	int 1Digit = z % 10;

	if (1Digit < 0)
	{
		1Digit *= -1;
	}
		_putchar(1Digit + '0');
		return (1Digit);
}
