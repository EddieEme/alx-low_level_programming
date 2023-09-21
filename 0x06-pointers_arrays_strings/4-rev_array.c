#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp =  a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
