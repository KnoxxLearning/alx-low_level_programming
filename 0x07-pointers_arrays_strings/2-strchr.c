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
		int i;

			for (i = 0; s[i] >= '\0'  ; i++)
					{
								if (s[i] == c)
											{
															return (s + i);
																	}
									}

				return ('\0');
}
