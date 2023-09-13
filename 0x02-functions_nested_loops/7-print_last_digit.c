#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: n is an argument
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)

		last_digit = -1 * last_digit;

	else
		last_digit = last_digit;

	_putchar(last_digit + 48);


	return (last_digit);
}
