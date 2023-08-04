#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9)
 *
 * @c: The value to be checkrd
 *
 * Return: 1 is returned for digit and 0 for other values
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
