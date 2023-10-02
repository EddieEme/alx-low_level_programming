#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s:segment targeted
 * @accept: reference length container
 * *Return: returns the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int j;

	len = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				len++;
				break;
			}
			else if ((accept[j + 1]) == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
