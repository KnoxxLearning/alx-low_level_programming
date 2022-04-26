#include "main.h"
/**
 *_strpbrk - " function locates the first occurrence in the string s of any of the bytes in the string accept"
 *@s: "The point to the string to be scanned"
 *@accept: "The pointer to the string with the characters to match"
 *
 * Return: "Pointer to char in 's' that matches one char in 'accept', NULL if character is unfound"
 */
char *_strpbrk(char *s, char *accept)
{
	int p = 0, r = 0;
	int q;

	while (accept[p] != '\0')
	{
		p++;
	}
	while (s[r] != '\0')
	{
		for (q = 0; q < p; q++)
		{
			if (s[r] == accept[q])
			{
				return (s);
			}
			r++;
		}
		return ('\0');
	}
}

