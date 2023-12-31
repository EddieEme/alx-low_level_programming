#include <stdio.h>
#include "main.h"

/**
* leet - function that encodes a string into 1337
* @str: Parameter
* Return: 0
*/

char *leet(char *str)
{
	char *ptr = str;
	char leetMap[256] = {0};

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	while (*ptr != '\0')
	{
		if (leetMap[(unsigned char)*ptr])
		{
			*ptr = leetMap[(unsigned char)*ptr];
		}
		ptr++;
	}

	return (str);
}
