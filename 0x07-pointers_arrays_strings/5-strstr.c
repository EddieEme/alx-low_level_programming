#include "main.h"

/**
* _strstr - function that locates a substring
* @haystack: the string to search in
* @needle: the substring to search for
* Return: pointer to the beginning of the located substring,
* ________or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
