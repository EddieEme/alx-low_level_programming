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
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	char *new_str;
	int num = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num < 0)
		return (NULL);

	if (num >= len_s2)
	{
		num = len_s2;
	}
	new_str = (char *)malloc(len_s1 + num + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, s1);
	strncpy(new_str + len_s1, s2, num);
	new_str[len_s1 + num] = '\0';
	return (new_str);
}
