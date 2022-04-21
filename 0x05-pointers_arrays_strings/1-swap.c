#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to a
 * @b: pointer to b
 * Return: No return
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
