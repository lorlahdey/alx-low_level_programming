#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 *
 * @s: the string to find its length
 *
 * Return: length of a string
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return(length);
}
