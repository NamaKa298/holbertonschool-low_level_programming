#include<stdio.h>
#include<stdlib.h>
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
	int resultat_multiplication = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (count = 1 ; count < argc ; count++)
	{
		resultat_multiplication *= atoi(argv[count]);
	}
	printf("%d\n", resultat_multiplication);
	return (0);
}
