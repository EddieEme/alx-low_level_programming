#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: firt pointer parameter
 * @b: second pointer parameter
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
