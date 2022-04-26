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
	int x; 
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size + 1) * x];
		sum2 += a[(size - 1) * (x + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
