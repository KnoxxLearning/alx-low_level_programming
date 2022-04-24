#include "main.h"
/**
 * _strcmp - "Function used to compare two strings"
 *
 * @s1: "Pointer for the 1st string"
 * @s2: "Pointer for the 2nd string"
 *
 * Return: "Return 0 if both strings return the same thing"
 */
int _strcmp(char *s1, char *s2) {
	int len1 = 0;
	int len2 = 0;

	while (s1[len1]) {
		len1 ++;
	}

	while (s2[len2]) {
		len2++;
	}

	if (len1 < len2) {
		return (-15);
	}
	else if (len1 > len2) {
		return (15);
	}
	else 
	{
		return (0);
	}
}
