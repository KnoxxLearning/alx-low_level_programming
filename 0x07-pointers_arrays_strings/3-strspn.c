#include "main.h"
#include <string.h>
/**
 * _strspn -"Function that gets the length of a prefix substring"
 *@s: "Location of the string to be scanned"
 *@accept: "The string containing the list of characters to match in 's'"
 *
 *Return: "The number of characters in the initial segment consisting of only characters from 'accept'"
*/

unsigned int _strspn(char *s, char *accept);
{
	int p = 0, q = 0, r;
	unsigned int count = 0;

	while (accept[p] != '\0')
	{
		p++
	}
	for (q = 0; q < p; q++;)
	{
		r = 0;
		while (s[r] != '\0')
		{
			if (s[r] == accept[q])
			{
				count++;
			}
			r++;
		}
	}
	return (count);
}
