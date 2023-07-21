#include "main.h"
/**
 * print_most_numbers - a function that prints the
 * numbers, from 0 to 9 except 2 & 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 0; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
