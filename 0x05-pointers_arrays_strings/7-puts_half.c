#include <string.h>
#include "main.h"

/**
 * puts_half - Function to print the second half
 * @str: Parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int i, len, start;

	len = strlen(str);
	start = len / 2;
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
