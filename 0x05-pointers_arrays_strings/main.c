#include "main.h"
#include "main.h"

/*
 * main - "These are some of the functions we'll be using."
 *
 * Return: "Always 0"
 */
int main(void)
{
	int n;

	n= 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
