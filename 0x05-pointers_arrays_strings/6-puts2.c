#include "main.h"
#include <string.h>

/**
* puts2 - Function to print the characters
* @str: parameter
* Return: print
*/
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
