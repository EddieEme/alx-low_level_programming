#include "main.h"
/**
* str_concat - function that concatenates two strings
* @s1: first input parameter
* @s2: second input parameter
* Return: New string
*/

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	new_str = (char *)malloc(len1 + len2 + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	new_str = strcpy(new_str, s1);
	new_str = strcat(new_str, s2);

	return (new_str);
}
