#include "main.h"

/**
  * binary_to_uint - function that converts a
  * binary number to an unsigned int
  * @b: b is pointing to a string of 0 and 1 chars
  * Return: the converted number, or 0 if
  *	there is one or more chars in the string
  *	b that is not 0 or 1 b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, value = 0;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			value += 1 << (len - 1 - i);
		}
		else if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	return (value);
}

