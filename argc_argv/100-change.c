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
	int pieces[5] = {25, 10, 5, 2, 1};

	int count, number;
	char cents = 0;
	int nbre_piece = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	for (count = 0 ; count < 5 ; count ++)
	{
		printf("valeur restante : %d\n", number);
		nbre_piece += (number / pieces[count]);
		cents += nbre_piece;
		number = number - (nbre_piece * pieces[count]);
		nbre_piece = 0;
		printf("valeur restante : %d\n", number);
		if (number == 0)
		{
			printf("%d\n", cents);
			return (0);
		}
	}
	return (0);
}
