#include <ctype.h>
#include "main.h"

/**
* _isdigit - checks for digits
* @c: c is an argument
* Return: Always 0 (Success)
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
