#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int index = 0;
	int a;

	while (s[index] != '\0')
	index++;
	for (a - 0; a < index; a++)
	{
		index--;
		rev = s[a];
		s[a] = s[index];
		s[index] = rev;
	}
}
