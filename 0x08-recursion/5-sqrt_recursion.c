#include "main.h"

/**
* sqrt_helper - function is a recursive function
* that tries to find the square root of a number n
* @n: argument
* @guess: quare root
* Return: Square root
*/
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: argument
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}
