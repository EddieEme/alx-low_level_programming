#include "main.h"

/**
* _pow_recursion - recursion function that returns the value
* of x raised to the power of y
* @x: The base
* @y: The power
* Return: Return value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (0);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
