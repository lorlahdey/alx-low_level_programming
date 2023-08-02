#include "main.h"

/**
 * factorial - a function that returns the factorial of any given number
 *
 * @n: number to return the factorial from
 *
 * Return: factorial of n or -1 when n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
