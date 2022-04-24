#include "main.h"

/**
* print_alphabet_x10 - "print the alphabet 10x in lowercase"
*
* Return: Nothing
*/
void print_alphabet_x10(void)
{
	char let;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}

		_putchar('\n');
	}

}
