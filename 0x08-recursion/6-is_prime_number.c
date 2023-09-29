#include "main.h"

/**
* is_prime_helper - functions that calculate prime number
* @n: parameter1
* @i: Parameter2
* Return: 1 for prime else 0
*/
int is_prime_helper(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_helper(n, i + 1));
		}
	}
}

/**
* is_prime_number - function that returns 1 if the input integer
* is a prime number
* @n: parameter1
* Return: 1 for prime else 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}
