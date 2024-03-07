#include<stdio.h>
#include<stdlib.h>
/**
 * main - check the code
 *
 * @argc: character to be verified
 * @argv: character to be verified
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;
	int resultat_addition = 0;


	for (count = 1 ; count < argc ; count++)
	{
		if (*argv[count] > '9' || *argv[count] < '0')
		{
			printf("Error\n");
			return (1);
		}
		resultat_addition += atoi(argv[count]);
	}
	printf("%d\n", resultat_addition);
	return (0);
}
