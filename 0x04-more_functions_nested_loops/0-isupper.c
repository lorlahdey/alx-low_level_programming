#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 *
 * @c: value to be checked
 *
 * Return: 1 for upper letters and 0 for other values
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);
}
