#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: A pointer to the destination string.
 * @s2: A pointer to the source string.
 * @n: The maximum number of characters to copy from the source string
 * Return: New string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n < 0)
		return (NULL);

	if (n >= len_s2)
	{
		n = len_s2;
	}
	new_str = (char *)malloc(len_s1 + n + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, s1);
	strncpy(new_str + len_s1, s2, n);
	new_str[len_s1 + n] = '\0';
	return (new_str);
}
