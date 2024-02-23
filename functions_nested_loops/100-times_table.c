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
	if (n >= 0 && n < 15)
	{
		int i, j;

		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				if (j == 0)
				{
					_putchar('0' + i * j);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (i * j < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + i * j);
					}
					if (i * j >= 10 && i * j < 100)
					{
						_putchar(' ');
						_putchar('0' + i * j / 10);
						_putchar('0' + i * j % 10);
					}
					if (i * j >= 100)
					{
					_putchar('0' + i * j / 100);
					_putchar('0' + i * j % 100 / 10);
					_putchar('0' + i * j % 100 % 10);

					}
				}
				_putchar('\n');
			}
		}
	}
}
