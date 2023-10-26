#include "main.h"

/**
  * print_binary - function that prints the
  * binary representation of a number
  * @n: number to be converted
  * Return: nothing
  */

void print_binary(unsigned long int n)
{
	int num_bits = sizeof(n) * 8;
	int i, leading_zero = 1;
	unsigned long int value = 1UL << (num_bits - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < num_bits; i++)
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
