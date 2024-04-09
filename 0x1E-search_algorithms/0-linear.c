#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: pointer to 1st element of the array
 * @size: the number of element in array
 * @value: return index where value is located
 * Return: 0  always successful
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
		return (-1);
}
