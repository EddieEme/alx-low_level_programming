#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints in reverse, followed by a new line.
 * @s: parameter
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
