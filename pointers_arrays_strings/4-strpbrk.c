#include "main.h"
/**
 * _strpbrk - check the code
 *
 * @accept: The character to print
 * @s: The character to print
 *
 * Return: character.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	char *result;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				result = &s[i];
				return (result);
			}
		}
	}
	return ('\0');
}
