#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: Always successful
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);
	end = 0;

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end += jump;
	}
	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	/**
	 * This line ensures that end is within the bounds of the array.
	 * It sets end to size if end exceeds size - 1,
	 * preventing out-of-bounds access.
	 */

	end = (end < size - 1) ? end : size;

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
	}
