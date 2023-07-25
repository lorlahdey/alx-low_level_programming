#include "main"
#include <stdio.h>
/**
 * print_rev - a function that prints a string, in reverse
 *
 * @s: string value to be reversed
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
