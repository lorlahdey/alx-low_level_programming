#include "main.h"
#include <stdio.h>
/**
 * print_number - a function that prints an integer
 *
 * @n: Integer
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int l = n;

	if (n < 0)
	{
		n *= -1;
		l = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
