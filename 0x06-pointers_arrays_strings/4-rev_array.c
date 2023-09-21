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
	int start, end, temp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp =  a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end++;
	}
}
