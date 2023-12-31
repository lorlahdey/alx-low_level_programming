#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that convert a
 * binary number to an unsigned int
 *
 * @b: char string
 *
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;
	int k;

	if (b == NULL)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}

	for (power = 1, sum = 0, k--; k >= 0; k--, power *= 2)
	{
		if (b[k] == '1')
			sum += power;
	}

	return (sum);
}
