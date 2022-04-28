#include <stdio.h>
#include <stdlib.h>

/**
 * main - "Check the code"
 *
 * Description: "Code that prints all possible combinations of 2 digits"
 *
 * Return: 0
 */
int main(void)
{
	int p;
	int q;
	int r;
	int s = 0;

	while (s < 10)
	{
		r = 0;
		while (r < 10)
		{
			q = 0;
			while (q < 10)
			{
			
				p = 0;
				while (p < 10)
				{
				
					if (!(s == p && r == q))
					{
					putchar('0' + s);
					putchar('0' + r);
					putchar(' ');
					putchar('0' + q);
					putchar('0' + p);
					if (!(s + r == 18 && p + q == 17 && q == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			p++;
		}				
		q++;
	}
	r++;
	}
	s++;
}
	putchar('\n');
	return (0);
}
