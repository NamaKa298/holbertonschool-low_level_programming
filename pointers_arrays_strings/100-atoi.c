#include "main.h"
/**
 * _atoi - Entry point
 *
 * @s: character to be verified
 *
 * Return: Always result.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9') 
		{
			res = res * 10 + (s[i] - '0');
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (res != 0)
		{
			break;
		}
		i++;
	}
	return res * sign;
}
