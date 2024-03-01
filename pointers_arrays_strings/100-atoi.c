#include "main.h"
/**
 * _atoi - Entry point
 *
 * @s: character to be verified
 *
 * Return: result
 */
#include <stdio.h>

int _atoi(char *s)
{
	int i = 0;
	int sign = 0;
	int res = 0;

	while (s[i])
	{
		if (s[i] == ' ' && s[i - 1] >= '0' && s[i - 1] <= '9')
		{
			return (res);
		}
		else if ((s[i] < '0' || s[i] > '9') && (s[i] != '-'))
		{
			i++;
			continue;
		}
		else if (s[i] == '-')
		{
			sign++;
			i++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
			i++;
		}
	}
	if (sign % 2 != 0)
	{
		return (-res);
	}
	else
	{
		return (res);
	}
}
