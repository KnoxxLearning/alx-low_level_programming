#include "main.h"
#include <stdio.h>

/**
 * -strchr - "Function used to locate a string"
 *  @c: "character to be searched for" 
 *  @s: "Pointer to the string to be scanned"
 *
 * Return: "The first occurance of character c and NULL if unfound"
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
		return (s + x); 
		}
	}
	return ('\0');
}

int main ()
{

	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
