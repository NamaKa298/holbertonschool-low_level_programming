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
	int count;

	for (count = 0 ; count < argc ; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
