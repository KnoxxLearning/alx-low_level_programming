#include "main"

/**
* print_sight - "Funtion that prints the sign of a number"
* @n: "This is the number we'll assign a sign to"
*
* Return: 1 should the number be > 0,
*	0 should the number =0,
*	-1 should the number be < 0
*/
int print_sign(int n)
{
	int test;
	if (n > 0)
	{
		test = 1;
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
		return (0)'
	}
	else
	{
		test = -1;
		_putchar('-');
		return (0);
	}
}
