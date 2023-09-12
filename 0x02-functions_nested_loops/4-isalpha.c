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

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (c == letters || c == toupper(letters))
		{
			return (1);
		}
	}
	return (0);
}
