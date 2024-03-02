#include "main.h"

/**
 * cap_string - check the code
 *
 * @str: The character to print
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;

	for (i =  0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] >= 65 && str[i - 1] <= 90)
			{
				continue;
			}
			else if (str[i - 1] >= 97 && str[i - 1] <= 122)
			{
				continue;
			}
			else if ((str[i - 1] >= 48 && str[i - 1] <= 57) || str[i - 1] == '-')
			{
				continue;
			}
			else
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
