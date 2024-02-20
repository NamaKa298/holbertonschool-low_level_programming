#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sd;

	for (sd = 48 ; sd <= 57 ; sd++)
	{
		putchar(sd);
		if (sd < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
