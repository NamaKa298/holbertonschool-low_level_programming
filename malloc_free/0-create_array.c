#include<stdlib.h>
#include"main.h"
/**
 * create_array - check the code
 *
 * @size: The character to print
 * @c: The character to print
 *
 * Return: character.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(c) * (size + 1));
	if (size == 0)
          {
                  return (NULL);
          }
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
