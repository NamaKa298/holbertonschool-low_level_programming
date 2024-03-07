#include<ctype.h>
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
	int count, j;
	int resultat_addition = 0;


	for (count = 1 ; count < argc ; count++)
	{
		for (j = 0 ; argv[count][j] != '\0' ; j++)
		{
			if (!isdigit(argv[count][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		resultat_addition += atoi(argv[count]);
	}
	printf("%d\n", resultat_addition);
	return (0);
}
