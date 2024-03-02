#include "main.h"
#include <limits.h>

/**
 * _atoi - Entry point.
 *
 * @s: character to be verified.
 *
 * Return: convert integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int unite;
	int max_div_10 = INT_MAX / 10;
	int max_mod_10 = INT_MAX % 10;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			unite = s[i] - '0';
			if (result > max_div_10 || (result == max_div_10 && unite > max_mod_10))
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			result = result * 10 + unite;
		}
		else if (result > 0)
		{
			break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (result * sign);
}
