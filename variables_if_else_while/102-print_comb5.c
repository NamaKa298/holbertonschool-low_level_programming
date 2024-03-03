#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			for (k = 0 ; k <= 9 ; k++)
			{
				for (l = 0 ; l <= 9 ; l++)
				{
					if (k <= i && l < j)
					{
						continue;
					}
					else if (i == k && j >= l)
					{
						continue;
					}
					else if (i > k && j <= l)
					{
						continue;
					}
					else
					{
						if (i != 0 || j != 0 || k != 0 || l != 1)
						{
							putchar(',');
							putchar(' ');
						}
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + l);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
