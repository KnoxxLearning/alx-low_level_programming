#include "main.h"

/**
 * jack_bauer - "Function that all minutes of the Jack Bauer day"
 * Return: Nothing
 */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;
	int a = 9;

	h2 = 0;
	while (h2 <= 2)
	{
		if (h2 == 2)
		{
			y = 3;
		}
		h1 = 0;
	while (h1 <= y)
	{
		m1 = 0;
	while (m1 <= 9)
	{
		_putchar('0' + h2);
		_putchar('0' + h1);
		_putchar(':');
		_putchar('0' + m2);
		_putchar('0' + m1);
		_putchar('\n');
		m1++;
	}
	m1++;
	}
	m2++;
	}
	h1++;
	}
	h2++;
	}
}
