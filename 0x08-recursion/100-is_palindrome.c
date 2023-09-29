#include "main.h"

/**
* is_palindrome_helper - fuction to check if sring is same
* when reversed
* @str: string
* @start: string start
* @end: string end
* Return: 0
*/

int is_palindrome_helper(char *str, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (str[start] != str[end])
	{
		return (0);
	}
	return (is_palindrome_helper(str, start + 1, end - 1));
}
/**
* is_palindrome -  function that returns 1 if a string is a
* palindrome and 0 if not.
* @str: string
* Return: 1 and 0
*/

int is_palindrome(char *str)
{
	int length = strlen(str);

	return (is_palindrome_helper(str, 0, length - 1));
}
