#include "main.h"
/**
 * _strchr - check the code
 *
 * @c: The character to print
 * @s: The character to print
 *
 * Return: character.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *result;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= c)
		{
			result = &s[i];
			return (result);
		}
	}
	return ('\0');
}


