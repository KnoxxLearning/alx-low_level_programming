#include "main.h"

/**
 * leet - "Function that encodes a string"
 * @str: "The string we'll encode"
 *
 * Return: "The encoded string"
 */
char *leet(char *)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
	while (c[j] != '\0')
	{
		if (str[i] == c[j])
		{
			str[i] = n[j];
		}
		j++;
	}
	i++;
	}
}

