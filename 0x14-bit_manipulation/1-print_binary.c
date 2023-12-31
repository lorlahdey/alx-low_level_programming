#include "main.h"
#include <stdio.h>

/**
 * print_binary - a program that print
 * binary representation of a number
 *
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, shifts = 0; (tmp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
