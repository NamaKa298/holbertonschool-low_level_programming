#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*operation)(int, int);
	int resultat;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	operation = get_op_func(operator);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	resultat = operation(num1, num2);
	printf("%d\n", resultat);
	return (0);
}
