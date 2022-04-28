#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - "Fx that prints to 98"
 * @n "The number we'll start printing from"
 */

void print_to_98(int n)
{

	while (n < 98)
	{
		printf("%i", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i", n);
		n--;
	}

	printf("98");
	putchar('\n');
}
