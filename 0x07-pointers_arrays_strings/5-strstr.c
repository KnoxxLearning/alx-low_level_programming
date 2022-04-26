#include "main.h"

/**
 * _strstr - "Function that locates a substring"
 *
 *@haystack - "Points to the string to be scanned"
 *@needle - "Pointer to the substring to be searched within 'haystack'"
 *
 * Return: "Pointer at the beginning of substring, NULL if unfound"
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, z = 0;
	int y;
	while (haystack[x] == '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
		while (needle[z] == haystack[y])
		{
			if (needle[z] == '\0')
			{
				return (haystack);
			}
			z++;
		}
		return ('\0');
}	
