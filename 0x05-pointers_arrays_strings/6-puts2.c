#include "main.h"

/**
* puts2 - Function to print the characters
* @str: parameter
* Return: print
*/
void puts2(char *str)
{
int len, end, i;

	*str = str;
	len = 0;
	end = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}

	end = len - 1;
	for (i = 0; i <= end; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
 
}
