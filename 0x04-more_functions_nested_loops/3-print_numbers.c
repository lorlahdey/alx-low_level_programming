#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int l;

	for (l = 0; l <= 9; l++)
	{
		_putchar(l + '0);
	}
	_putchar('\n');
}
