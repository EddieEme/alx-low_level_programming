#include "main.h"

/**
* _print_rev_recursion - A recursion function that prints a string in reverse
* @s: argument that takes string
* Return: nothing
*/

void _print_rev_recursion(char *s)
{
	int len;

	len = strlen(s);
	if (len == 0)
	{
		return;
	}
	else
	{
		char *new_s = malloc(len * sizeof(char));

		strncpy(new_s, s, len - 1);
		new_s[len - 1] = '\0';
		_putchar(s[strlen(s) - 1]);
		_print_rev_recursion(new_s);
	}
}
