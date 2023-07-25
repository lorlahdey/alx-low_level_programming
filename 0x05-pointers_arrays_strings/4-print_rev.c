#include "main"
#include <stdio.h>
/**
 * print_rev - a function that prints a string, in reverse
 *
 * @s: string value to be reversed
 *
 * Return: 0
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
