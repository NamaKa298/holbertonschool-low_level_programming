#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{
		if (ch == 'e')
		{
			continue;
		}
		else if (ch == 'q')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
