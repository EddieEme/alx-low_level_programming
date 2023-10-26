#include "main.h"

/**
  * print_binary - function that prints the
  * binary representation of a number
  * @n: number to be converted
  * Return: nothing
  */

void print_binary(unsigned long int n)
{
	int i, leading_zero = 1;
	unsigned long int value = 1UL << (31);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < 32; i++)
	{
		if ((n & value) != 0)
		{
			_putchar('1');
			leading_zero = 0;
		} else if (!leading_zero)
		{
			_putchar('0');
		}
		value >>= 1;
	}
}
