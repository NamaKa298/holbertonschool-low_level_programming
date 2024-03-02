#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k;

	for (i = 0 ; i <= 7 ; i++)
	{
		for (j = 1 ; j <= 8 ; j++)
		{
			for (k = 2 ; k <= 9 ; k++)
			{
				if (j <= i || k <= j)
				{
					continue;
				}
				else
				{
					if (i != 0 || j != 1 || k != 2)
					{
						putchar(',');
						putchar(' ');
					}
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
