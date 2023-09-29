#include "main.h"

/**
* is_prime_number - Write a function that returns
* 1 if the input integer is a prime number, otherwise return 0
* @n: argument
* Return: 1 is prime, 0 is not prime
*/
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
