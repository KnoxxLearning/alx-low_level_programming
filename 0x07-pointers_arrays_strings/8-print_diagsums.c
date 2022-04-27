#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - "Function prints sum of 2 diagnal lines of a square"
 * @a: "Pointer to the 2-dimensional array"
 * @size: "The size of the array"
 */
void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
	sum1 += a[x];
	sum2 += a[size - x - 1];
	a += size;
	}
	printf("%d", sum1);
	printf("%d\n", sum2);
}
