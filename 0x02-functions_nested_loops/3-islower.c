#include <main.h>
/**
 * _islower - displays 1 if the input
 * is a lowercase and for uppercas shows 0
 *
 * @c: ASCII code for character
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
