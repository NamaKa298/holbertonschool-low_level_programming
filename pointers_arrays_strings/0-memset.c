#include "main.h"
/**
 * _memset - check the code
 *
 * @b: The character to print
 * @s: The character to print
 * @n: The character to print
 *
 * Return: character.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
