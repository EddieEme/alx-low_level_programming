#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: Parameter
 * Return: Always 0
 */

int _atoi(char *s)
{
	int i, result, sign;

	result = 0;
	sign = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			result = result * 10 + (s[i] + '0');
		}
	}
	return (result * sign);
}
