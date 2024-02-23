#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_times_table - check the code.
 *
 * @n: character to check.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 15 && n > 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				k = i * j;
					if (j == 0)
					{
						printf("%d", k);
					}
					else if (k >= 0 && k < 10)
					{
						printf(",   %d", k);
					}

					else if (k >= 10 && k < 100)
					{
						printf(",  %d", k);
					}
					else if (k >= 100 && k < 1000)
					{
						printf(", %d", k);
					}
			}
			printf("\n");
		}
	}
	_putchar('\n');
}
