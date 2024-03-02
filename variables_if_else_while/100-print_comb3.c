#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (j = 1 ; j <= 9 ; j++)
		{
			if (j <= i)
			{
				continue;
			}
			else
			{
				if (i == 0 && j ==1)
				{
					putchar('0' + i);
					putchar('0' + j);
				}
				else
				{
					putchar(',');
					putchar(' ');
					putchar('0' + i);
					putchar('0' + j);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
