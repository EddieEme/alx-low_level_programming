#include "main.h"

/**
* _strlen_recursion - recursion  function that returns the length of a string
* @s: argument
* Return: length of string
*/
int _strlen_recursion(char *s)
{
		if (s[0] == '\0')
		{
			return (0);
		}
		else
		{
			return (1 + _strlen_recursion(s + 1));
		}
}
