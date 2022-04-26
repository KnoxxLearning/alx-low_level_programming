#include "main.h"

/**
 * print_chessboard - "Function that prints the chessboard"
 * @a: "Pointer to the 2-dimensional array that'll print the chessboard"
 *
 */
void print_chessboard(char (*a)[8])
{
	int p;
	int q;

	for (q = 0; q < 8; q++)
	{
		for (q = 0; q < 8; p++)
		{
			_putchar(s[p][q]);
		}
		_putchar('\n');
	}
}
