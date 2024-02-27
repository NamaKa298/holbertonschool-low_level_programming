#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: The character to print
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length_of_the_string, n, i, temporaire;

	length_of_the_string = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
	}
	for (i = 0 ; i < n ; i++)
	{
		temporaire = str[n + i];
		_putchar(temporaire);
	}
	_putchar('\n');

}
