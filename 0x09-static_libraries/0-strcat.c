#include <string.h>
#include "main.h"

/**
* _strcat - function that concatenates two strings.
* @dest: Destination
* @src: Source
* Return: ALwas 0
*/

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
