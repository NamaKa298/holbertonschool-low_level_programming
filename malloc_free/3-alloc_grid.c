#include<stdlib.h>
#include"main.h"
/**
 * alloc_grid - check the code
 * @width: The character to print
 * @height: The character to print
 * Return: Always tableau.
 */
int **alloc_grid(int width, int height)
{
	int **tableau;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tableau = malloc(sizeof(int *) * height);
	if (tableau == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		tableau[i] = malloc(sizeof(int) * width);
		if (tableau[i] == NULL)
		{
			for ( ; i >= 0 ; i--)
			{
				free(tableau[i]);
			}
			free(tableau);
		}
		for (j = 0 ; j < width ; j++)
		{
			tableau[i][j] = 0;
		}
	}
	return (tableau);
}
