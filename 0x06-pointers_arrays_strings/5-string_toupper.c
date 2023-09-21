#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* string_toupper - function that changes all lowercase
* letters of a string to uppercase.
* @str: argument
* Return: 0
*/

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
