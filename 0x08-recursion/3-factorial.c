#include "main.h"

/**
* factorial - recursion function that returns the factorial of a given number
* @n: Paremeter
* Return: -1 for n < 0, factorial(n)
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
