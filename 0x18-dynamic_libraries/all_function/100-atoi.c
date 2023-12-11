#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

/**
* _atoi - function that convert a string to an integer
* @s: Parameter
* Return: Always 0
*/

int _atoi(char *s)
{
	int result, i, sign;

	sign = 1;
	result = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (isdigit(s[i]))
		{
			result = result * 10 + (s[i] - '0');
		}
	}
	return (result * sign);
}
