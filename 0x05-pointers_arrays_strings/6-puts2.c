#include "main.h"

/**
 * puts2 - Function to print the characters
 *@s parameter 
 * Return: Nothing 
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
