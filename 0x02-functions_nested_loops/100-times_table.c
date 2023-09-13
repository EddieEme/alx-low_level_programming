#include <stdio.h>
#include "main.h"
/**
* print_times_table - function that prints the n times table
* @n: argument
*/
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				if (product < 10)
				{
					printf(" %d", product);
				}
				else if (product < 100)
				{
					printf(" %d", product);
				}
				else
				{
					printf("%d", product);
				}
				if (column < n)
				{
					printf(", ");
				}
			}
				putchar('\n');
		}
	}
}
