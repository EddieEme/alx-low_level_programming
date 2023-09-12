#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: an argument and checks if it's a lowercase character
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
