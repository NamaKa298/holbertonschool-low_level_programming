#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, k, l;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (j == 0)
				{
					_putchar('0' + k);
				}
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
			}
			if (k >= 10)
			{
				if (j != 0)
				{
					if (k < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + k / 10);
						_putchar('0' + k % 10);
					}
					if (k >= 100 && k < 1000)
					{
						l = k % 100;
						_putchar(','),
						_putchar(' ');
						_putchar('0' + k / 100);
						_putchar('0' + l / 10);
						_putchar('0' + l % 10);
					}

				}
			}
		}
		_putchar('\n');
	}
}
