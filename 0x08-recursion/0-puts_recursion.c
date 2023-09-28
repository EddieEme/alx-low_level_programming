#include "main.h"

/**
* _puts_recursion - Recursion function that print a string,
* followed by a new line
* @s: argument
* Return: Nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_ putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
