#include "main.h"
/**
* _strdup - function that returns a pointer to a newly
* allocated space in memory
* @str: String
* Return: New string
*/

char *_strdup(char *str)
{
	char *new_str;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		new_str = strcpy(new_str, str);
	}
	return (new_str);
}
