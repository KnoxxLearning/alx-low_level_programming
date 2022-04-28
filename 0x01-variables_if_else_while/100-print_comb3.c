#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 */
int main(void)
{
	int p;
	int q = 0;

	while (q < 10)
	{
		p = 0;
		while (p < 10)
		{
			if (q != p && q < p)
			{
			putchar('0' + q);
			putchar('0' + p);

			if (p + q != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}

		p++;
	}
	q++;
	}
	putchar('\n');
	return (0);
}
