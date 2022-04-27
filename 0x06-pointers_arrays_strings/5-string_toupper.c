#include "main.h"

/**
 * string_toupper - "Function that changes lowercase to uppercase"
 * @str: "Lowercase string we'll change to uppercase"
 *
 * Return: "The string that's been changed to uppercase"
 */

char *string_toupper(char *str)
{
	int u;
	for (u = 0; str[u] != '\0'; u++)
	{
		if (str[u] <= 'z' && str[u] >= 'a')
			str[u] -= 32;
	}
	return (str);
}
