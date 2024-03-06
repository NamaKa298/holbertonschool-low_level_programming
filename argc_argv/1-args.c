#include<stdio.h>
/**
 * main - check the code
 *
 * @argc: character to be verified
 * @argv: character to be verified
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argv != 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
