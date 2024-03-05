#include "main.h"
/**
 * print_chessboard - check the code
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int k = 0;

	while (*a[k] != '\0')
	{
		k++;
	}
	for (i = 0 ; i < k - 1 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
