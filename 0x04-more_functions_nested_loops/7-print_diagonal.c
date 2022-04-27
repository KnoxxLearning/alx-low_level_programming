#include "main.h"
/**
 * print_diagonal - "Function that draws a diagonal on the terminal"
 * @n: "Number of times the character should be printed"
 *
 * Return: "Only print a new line if n is 0 or less"
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (j = 0; j < n; j++)
{
if (j == i)
_putchar(' ');
}
_putchar('\n');
}
}
