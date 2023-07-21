#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for  (y = 0; x < n; y++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
