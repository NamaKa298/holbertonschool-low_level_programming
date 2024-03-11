#include<stdlib.h>
#include"main.h"
/**
 * _strdup - check the code
 *
 * @str: The character to print
 *
 * Return: character.
 */
char *_strdup(char *str)
{
	char *str_duplicated;
	unsigned int len, i;
	char *temporaire = str;

	if (str == 0)
	{
		return (NULL);
	}
	len = 0;
	while (*temporaire != '\0')
	{
		temporaire++;
		len++;
	}
	str_duplicated = malloc(sizeof(char) * (len + 1));
	if (str_duplicated == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		str_duplicated[i] = str[i];
		i++;
	}
	str_duplicated[i] = '\0';
	return (str_duplicated);
}
