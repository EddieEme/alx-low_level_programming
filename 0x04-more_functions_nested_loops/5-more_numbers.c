#include <ctype.h>
#include "main.h"

/**
* more_numbers - print 0 to 14 ten times
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		for (j = 0; j <= 14 ; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		i++;
		_putchar('\n');
	}
}
