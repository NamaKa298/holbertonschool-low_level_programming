#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - Get the appropriate arithmetic operation function.
 * @s: The arithmetic operator as a string.
 *
 * Return: A pointer to the function performing the arithmetic operation
 * specified by @s, or NULL if @s does not match any of the expected operators.
 *
 * This function takes an arithmetic operator represented as a string
 * @s and returns
 * a pointer to the corresponding arithmetic operation function.
 * The returned
 * function pointer can then be used to perform the desired arithmetic
 * operation.
 * If @s does not match any of the expected operators (+, -, *, /, %),
 * NULL is returned.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*s == *ops[i].op)
		{
			if (s == NULL)
			{
				printf("Error\n");
				exit(99);
			}
			return (ops[i].f);

		}
		i++;
	}
	return (0);
}
