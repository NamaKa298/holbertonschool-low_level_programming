#include"main.h"

/**
 * times_table - check the code
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
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
					_putchar('0' + k);
				}
			}
			if (k >= 10)
			{
				if (j != 0)
				{
					_putchar(','),
					_putchar(' ');
					_putchar('0' + k / 10);
					_putchar('0' + k % 10);
				}
			}
		}
		_putchar('\n');
	}
}
