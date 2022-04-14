#include "main"

/**
*print_sight - funtion that prints the sign of a number
*@n: This is the number we'll assign a sign to
*
* Return: 1 should the number be >0,
* 	0 should the number =0,
* 	-1 should the number be < 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0)'
	}
	else
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
