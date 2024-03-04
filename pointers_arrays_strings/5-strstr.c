#include "main.h"
/**
 * _strstr - check the code
 *
 * @haystack: The character to print
 * @needle: The character to print
 *
 * Return: character.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; haystack[i] >= '\0' ; i++)
	{
		j = 0;

		if (haystack[i] == needle[0])
		{
			for (j = 0 ; needle[j] >= '\0' ; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					if (needle[j] =='\0')
					{
						return (&haystack[i]);
					}
				}
				else 
				{
					continue;
				}
			}
		}
	}
	return ('\0');
}
