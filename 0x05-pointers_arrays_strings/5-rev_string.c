#include "main.h"

/**
 * rev_string - fx to reverse a string
 * @s: the string to reverse
 *
 * Return: None
 */
void rev_string(char *)
{
	int len, i;
	char l;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	len--;
	for (i = 0; i < len; i++)
	{
		l = *(s + len);
		*(s + len) = *(s + i);
		*(s + i) = l;
		len--;
	}
}
