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
		for (i = n; i >= 99; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d", i);
		}
		print("%d\n", 98);
	}
	_putchar('\n');
}
