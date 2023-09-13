#include <stdio.h>
#include "main.h"
/**
* print_to_98 - function that prints all natural numbers from n to 98.
* @n: parameter
*/
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (n > 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (n < 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	_putchar('\n');
}
