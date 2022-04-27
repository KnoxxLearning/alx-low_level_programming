#include "main.h"
#include <stdio.h>
/**
 * _strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */


char *_strstr(char *haystack, char *needle)
{
int c, d;

for (c = 0; haystack[c] > '\0'; c++)
{
	for (d = c; haystack[d] > '\0' && needle[d - c] > '\0'; d++)
	{
		if (haystack[d] != needle[d - c])
		{
			break;
		}
	}
	if (needle[d - c] == '\0')
	{
		return (haystack + c);
	}
}
return (0);
}
