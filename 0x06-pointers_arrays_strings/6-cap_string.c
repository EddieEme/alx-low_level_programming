#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
* cap_string - function that capitalizes all words of a string
* @str: parameter
* Return: 0
*/
char *cap_string(char *str)
{
	bool new_word = true;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (isspace(*ptr) || *ptr == ',' || *ptr == ';'
				|| *ptr == '.' || *ptr == '!' ||
				*ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')'
				|| *ptr == '{' || *ptr == '}')
		{
			new_word = true;
		}
		else if (new_word && islower(*ptr))
		{
			*ptr = toupper(*ptr);
			new_word = false;
		}
		else
		{
			new_word = false;
		}
		ptr++;
	}
	return (str);
}
