#include "main.h"

/**
 * -strchr - "Function used to locate a string"
 *  @c: "character to be searched for" 
 *  @s: "Pointer to the string to be scanned"
 *
 *Return: "The first occurance of character c and NULL if unfound"
 */
char *_strchr(char *s, char c)
{
	int t = 0;
	int u = 0;

	while (s[t])
	{
		u++;
	}
	for (t = 0; t < u; u++)
	{
		if (s[t] == c)
		{
			return (s + t);
		}
	}
	return ('\0');
}
