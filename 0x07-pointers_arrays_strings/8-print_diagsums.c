#include "main.h"

/**
 * _print_diagsum - "Fx that prints the sum of the 2 diagonals of a square matrix of integers"
 * @a: "Pointer to the square matrix of intergers"
 *
 * @size: "Refers to the size of the square matrix of integers"
 *
 * Return: "Void"
 *
 */
void print_diagsums(int *a, int size)
{
	int p;
	int sum1 = 0;
	int sum2 = 0;

	for (p = 0; p < size; p++)
	{
		sum1 = sum1 + a[p];
		a = a + size;
	}
	a = a - size;
	for (p = 0; p < size; p++)
	{
		sum2 = sum2 + a[p];
		a = a - size;
	}
	printf("%d, %d\n", sum1, sum2);
}
