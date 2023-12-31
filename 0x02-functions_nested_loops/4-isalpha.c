#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: c is an argument
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter || c == toupper(letter))
		{
			return (1);
		}
	}
	return (0);
}
