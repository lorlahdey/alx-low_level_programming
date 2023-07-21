#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 *
 * @c: value to be checked
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
