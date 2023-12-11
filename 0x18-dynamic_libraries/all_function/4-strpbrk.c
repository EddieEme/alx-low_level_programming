#include "main.h"

/**
* _strpbrk - function that searches a string for any of a set of bytes
* @s: the string to be scanned
* @accept: the string containing the set of characters to match.
* Return: Returns a pointer to the byte
* ________in s that matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
