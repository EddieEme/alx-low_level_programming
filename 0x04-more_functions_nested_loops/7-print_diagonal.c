#include <ctype.h>
#include "main.h"

/**
* print_line - print line
* @n: a is first argument
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
