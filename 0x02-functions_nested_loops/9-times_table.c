#include <stdio.h>
#include "main.h"
/**
 * time_table - function that prints the 9 times table, starting with 0
 * Redurn: Always 0 (success)
 */
void time_table(void)
{
	int row, column, product;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			product = row * column;

			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10)
			{
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				int tens = product / 10;
				int ones = product % 10
					;
				_putchar('0' + tens);
				_putchar('0' + ones);
			}
		}
		_putchar('\n');
	}
}
