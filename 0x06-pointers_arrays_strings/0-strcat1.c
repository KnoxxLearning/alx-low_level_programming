#include "main.h"
#include <string.h>
#include <stdio.h>

/*
 * fgets - "A function we'll be using to read the strings 'dest' & 'src'"
 * puts - "function we'll use to display the strings 'dest' & 'src'"
 */
int main()
{
	char dest[];
	fgets(dest, sizeof(name), stdin); // read string
	puts(dest); // display string
	return 0;
}
