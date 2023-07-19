#include <main.h>
/**
 * _abs - function that computes the absolute value of an integer
 *
 * @a: integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
