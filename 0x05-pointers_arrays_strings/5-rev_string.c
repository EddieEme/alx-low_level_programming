#include <string.h>
#include "main.h"

/**
 * rev_string - Function to print reversed string
 *@s: parameter 
 *Return: Nothing 
 */
void rev_string(char *s)
{
	int i, len, end;
	char temp;

	len = strlen(s);
	end = len - 1;
	for (i = 0; i < end; i++, end--)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;
	}
}
