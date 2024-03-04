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

	j = 0;

        for (i = 0 ; haystack[i] >= '\0' ; i++)
        {
		if (haystack[i] != needle[0])
		{
			continue;
		}
		else
		{
			while (haystack[i + j] == needle[j])
			{
				if (needle[j] =='\0')
				{
					return (&haystack[i]);
				}
				j++;
                        }
                }
        }
        return ('\0');
}
