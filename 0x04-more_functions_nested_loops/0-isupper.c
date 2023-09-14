#include <ctype.h>
#include "main.h"

/**
* _isupper - checks for alphabetic character type
* @c: c is an argument
* Return: Always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
